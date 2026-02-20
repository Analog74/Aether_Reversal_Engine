#!/usr/bin/env python3
import cv2
from pathlib import Path
import numpy as np
base = Path('specs/app-assets/ControllerEditor/extracted_pngs')
screen_path = Path('assets/images/3791B23_image.png')
out_dir = Path('specs/proofs')
out_dir.mkdir(exist_ok=True)
if not screen_path.exists():
    print('missing', screen_path)
    raise SystemExit(1)
img = cv2.imread(str(screen_path))
h, w = img.shape[:2]
print('screenshot', w, h)
# crop
cx, cy = 179, 384
win = 320
x0 = max(0, cx - win)
y0 = max(0, cy - win)
x1 = min(w, cx + win)
y1 = min(h, cy + win)
crop = img[y0:y1, x0:x1].copy()
cv2.imwrite(str(out_dir / 'jog-local-crop.png'), crop)
print('wrote crop', out_dir / 'jog-local-crop.png')
# Hough
gray = cv2.cvtColor(crop, cv2.COLOR_BGR2GRAY)
blur = cv2.medianBlur(gray, 9)
param2_values = [18,20,22,24,26,28,30]
uniq = []
for p2 in param2_values:
    circles = cv2.HoughCircles(blur, cv2.HOUGH_GRADIENT, dp=1.0, minDist=50, param1=100, param2=p2, minRadius=40, maxRadius=220)
    if circles is not None:
        circles = np.uint16(np.around(circles))
        for c in circles[0,:]:
            cx_c, cy_c, r = int(c[0]), int(c[1]), int(c[2])
            found = False
            for u in uniq:
                if abs(u[1]-cx_c) < 15 and abs(u[2]-cy_c) < 15 and abs(u[3]-r) < 15:
                    found = True
                    break
            if not found:
                uniq.append((p2, cx_c, cy_c, r))
print('unique hough candidates:', uniq)
# draw overlay of crop
ov = crop.copy()
for p2, x_c, y_c, r in uniq:
    cv2.circle(ov, (x_c, y_c), r, (255, 0, 0), 2)
    cv2.putText(ov, f'p2={p2}', (x_c-40, y_c-10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 0), 1)
cv2.imwrite(str(out_dir / 'jog-local-detection-refined.png'), ov)
print('wrote', out_dir / 'jog-local-detection-refined.png')
# scan extracted images for square-ish candidates
candidates = []
for p in sorted(base.iterdir()):
    if p.suffix.lower() != '.png':
        continue
    im = cv2.imread(str(p), cv2.IMREAD_UNCHANGED)
    if im is None:
        continue
    hh, ww = im.shape[:2]
    ar = ww / float(hh) if hh>0 else 0
    area = ww*hh
    if area >= 8000 and 0.7 < ar < 1.3:
        candidates.append((p.name, ww, hh, area))
candidates = sorted(candidates, key=lambda x:-x[3])
print('square-ish candidates (top 20):')
for c in candidates[:20]:
    print(c)
# template match top candidates to crop
matches = []
for name,ww,hh,area in candidates[:80]:
    p = base / name
    tpl = cv2.imread(str(p), cv2.IMREAD_UNCHANGED)
    if tpl is None:
        continue
    if tpl.shape[2] == 4:
        alpha = tpl[:,:,3]/255.0
        rgb = tpl[:,:,:3].astype(float)
        bg = 255 * np.ones_like(rgb)
        comp = (rgb*alpha[:,:,None] + bg*(1-alpha[:,:,None])).astype(np.uint8)
        tpl_gray = cv2.cvtColor(comp, cv2.COLOR_BGR2GRAY)
    else:
        tpl_gray = cv2.cvtColor(tpl, cv2.COLOR_BGR2GRAY)
    th, tw = tpl_gray.shape[:2]
    if tw > crop.shape[1] or th > crop.shape[0]:
        scale = min(crop.shape[1]/tw, crop.shape[0]/th) * 0.9
        tw2 = max(8, int(tw*scale))
        th2 = max(8, int(th*scale))
        tpl_gray = cv2.resize(tpl_gray, (tw2, th2), interpolation=cv2.INTER_AREA)
    res = cv2.matchTemplate(gray, tpl_gray, cv2.TM_CCOEFF_NORMED)
    minv, maxv, minloc, maxloc = cv2.minMaxLoc(res)
    matches.append((name, maxv, maxloc, tpl_gray.shape[::-1]))
matches = sorted(matches, key=lambda x:-x[1])
print('top template matches:')
for m in matches[:12]:
    print(m[0], 'score', round(m[1],3), 'loc', m[2], 'tpl_w,h', m[3])
# draw top matches
over = crop.copy()
for name,score,loc, (tw,th) in matches[:6]:
    x_l,y_l = loc
    cv2.rectangle(over, (x_l, y_l), (x_l+tw, y_l+th), (0,255,255),2)
    cv2.putText(over, f'{name} {round(score,2)}', (x_l, y_l-8), cv2.FONT_HERSHEY_SIMPLEX, 0.4, (0,255,255),1)
cv2.imwrite(str(out_dir / 'jog-template-matches.png'), over)
print('wrote', out_dir / 'jog-template-matches.png')
# report best circle and best template
if uniq:
    best = max(uniq, key=lambda u:u[3])
    p2, x_c, y_c, r = best
    global_x = x0 + x_c - r
    global_y = y0 + y_c - r
    bbox = (global_x, global_y, 2*r, 2*r)
    print('best circle global bbox', bbox, 'center', (x0+x_c, y0+y_c), 'r', r)
if matches:
    print('best template:', matches[0][0], 'score', matches[0][1])
else:
    print('no good template matches')
