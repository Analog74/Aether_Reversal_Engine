#!/usr/bin/env python3
import cv2
import json
from pathlib import Path
import numpy as np
base = Path('specs/app-assets/ControllerEditor/extracted_pngs')
screen_path = Path('assets/images/3791B23_image.png')
out_dir = Path('specs/proofs')
out_dir.mkdir(exist_ok=True)
if not screen_path.exists():
    print('missing screenshot', screen_path)
    raise SystemExit(1)
img = cv2.imread(str(screen_path))
h, w = img.shape[:2]
print('screenshot', w, h)
gray_full = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# gather candidates by approximate square-ish and reasonable area
candidates = []
for p in sorted(base.iterdir()):
    if p.suffix.lower() != '.png':
        continue
    im = cv2.imread(str(p), cv2.IMREAD_UNCHANGED)
    if im is None:
        continue
    hh, ww = im.shape[:2]
    ar = ww/float(hh) if hh>0 else 0
    area = ww*hh
    if 1000 < area < 200000 and 0.5 < ar < 2.0:
        candidates.append((p, ww, hh, area))
print('candidates count', len(candidates))
results = []
for p, ww, hh, area in candidates:
    tpl = cv2.imread(str(p), cv2.IMREAD_UNCHANGED)
    if tpl is None:
        continue
    # handle alpha
    if tpl.ndim == 3 and tpl.shape[2] == 4:
        alpha = tpl[:,:,3]/255.0
        rgb = tpl[:,:,:3].astype(float)
        bg = 255*np.ones_like(rgb)
        comp = (rgb*alpha[:,:,None] + bg*(1-alpha[:,:,None])).astype(np.uint8)
        tpl_gray = cv2.cvtColor(comp, cv2.COLOR_BGR2GRAY)
    else:
        tpl_gray = cv2.cvtColor(tpl[:,:,:3], cv2.COLOR_BGR2GRAY) if tpl.ndim==3 else tpl
    th, tw = tpl_gray.shape[:2]
    if th < 8 or tw < 8 or th > h or tw > w:
        continue
    # normalized cross correlation on full image
    res = cv2.matchTemplate(gray_full, tpl_gray, cv2.TM_CCOEFF_NORMED)
    minv, maxv, minloc, maxloc = cv2.minMaxLoc(res)
    results.append({'name': p.name, 'score': float(maxv), 'loc': maxloc, 'tpl_w': tw, 'tpl_h': th})
# sort by score
results = sorted(results, key=lambda x:-x['score'])
# write top 12
print('top matches:')
for r in results[:12]:
    print(r['name'], 'score', round(r['score'],3), 'loc', r['loc'], 'tpl', (r['tpl_w'], r['tpl_h']))
# pick top
if not results:
    print('no template candidates')
    raise SystemExit(0)
best = results[0]
# create overlay drawing top few
ov = img.copy()
for r in results[:6]:
    x,y = r['loc']
    tw, th = r['tpl_w'], r['tpl_h']
    cv2.rectangle(ov, (x,y), (x+tw, y+th), (0,255,255), 2)
    cv2.putText(ov, f"{r['name']} {round(r['score'],2)}", (x, y-8), cv2.FONT_HERSHEY_SIMPLEX, 0.4, (0,255,255),1)
cv2.imwrite(str(out_dir/'jog_refiner_overlay.png'), ov)
print('wrote', out_dir/'jog_refiner_overlay.png')
# if best score high enough, refine with local Hough
THRESH_SCORE = 0.72
refined = {'best': best}
if best['score'] >= THRESH_SCORE:
    bx, by = best['loc']
    bw, bh = best['tpl_w'], best['tpl_h']
    # center and radius guess
    cx = bx + bw//2
    cy = by + bh//2
    r_guess = max(bw, bh)//2
    # crop larger area
    pad = int(max(bw, bh)*1.5)
    x0 = max(0, cx - pad); y0 = max(0, cy - pad); x1 = min(w, cx + pad); y1 = min(h, cy + pad)
    crop = img[y0:y1, x0:x1].copy()
    cg = cv2.cvtColor(crop, cv2.COLOR_BGR2GRAY)
    blur = cv2.medianBlur(cg, 9)
    circles = cv2.HoughCircles(blur, cv2.HOUGH_GRADIENT, dp=1.0, minDist=50, param1=100, param2=24, minRadius=max(20, r_guess-40), maxRadius=r_guess+100)
    if circles is not None:
        circles = np.uint16(np.around(circles))
        # pick largest
        bestc = max(circles[0,:], key=lambda c: int(c[2]))
        ccx, ccy, rr = int(bestc[0]), int(bestc[1]), int(bestc[2])
        refined['circle'] = {'cx': int(x0+ccx), 'cy': int(y0+ccy), 'r': int(rr)}
        # draw
        cv2.circle(crop, (ccx, ccy), rr, (255,0,0), 2)
        cv2.imwrite(str(out_dir/'jog_hough_crop.png'), crop)
        print('wrote', out_dir/'jog_hough_crop.png')
    else:
        print('no hough circles in crop')
else:
    print('best template score below threshold', round(best['score'],3))
# save results json
with open(out_dir/'jog_refiner_results.json','w') as f:
    json.dump({'results': results[:20], 'refined': refined}, f, indent=2)
print('wrote', out_dir/'jog_refiner_results.json')
print('best candidate', best['name'], 'score', round(best['score'],3))
