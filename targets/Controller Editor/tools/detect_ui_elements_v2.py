#!/usr/bin/env python3
import cv2
import numpy as np
from pathlib import Path

# Robust UI element detection for Maschine screenshot
img_path = Path('assets/images/3791B23_image.png')
if not img_path.exists():
    print('missing', img_path)
    raise SystemExit(1)

img = cv2.imread(str(img_path))
h, w = img.shape[:2]
print('image', w, h)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Preprocess to emphasize controls
blur = cv2.GaussianBlur(gray, (5,5), 0)
th = cv2.adaptiveThreshold(blur, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY_INV, 31, 12)
# Morph close to join control shapes
kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (5,5))
th = cv2.morphologyEx(th, cv2.MORPH_CLOSE, kernel)

contours, _ = cv2.findContours(th, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# Detect pads: near-square, medium size
pad_candidates = []
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    area = ww*hh
    if 30 < ww < 120 and 30 < hh < 120 and 0.7 < ww/float(hh) < 1.25:
        # interior darkness check (pads are dark)
        mask = np.zeros(gray.shape, dtype=np.uint8)
        cv2.drawContours(mask, [c], -1, 255, -1)
        mean = cv2.mean(gray, mask=mask)[0]
        if mean > 20 and mean < 220:
            pad_candidates.append((x,y,ww,hh))

# if too few pad candidates, try an edge-based quad detection pass (more aggressive)
if len(pad_candidates) < 8:
    print('few pad candidates (', len(pad_candidates), ") — running edge-based quad detection")
    edges = cv2.Canny(blur, 50, 150)
    # dilation to join corners
    kern = cv2.getStructuringElement(cv2.MORPH_RECT, (3,3))
    edges = cv2.dilate(edges, kern, iterations=1)
    cnts, _ = cv2.findContours(edges, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
    for c in cnts:
        peri = cv2.arcLength(c, True)
        approx = cv2.approxPolyDP(c, 0.02 * peri, True)
        if len(approx) == 4 and cv2.isContourConvex(approx):
            x,y,wq,hq = cv2.boundingRect(approx)
            area = wq*hq
            if 25 < wq < 140 and 25 < hq < 140 and area > 600:
                ar = wq/float(hq)
                if 0.7 < ar < 1.3:
                    # check interior mean darkness
                    mask = np.zeros(gray.shape, dtype=np.uint8)
                    cv2.drawContours(mask, [approx], -1, 255, -1)
                    mean = cv2.mean(gray, mask=mask)[0]
                    if mean > 10 and mean < 220:
                        pad_candidates.append((x,y,wq,hq))
    # dedupe pad_candidates by position
    uniq = []
    used = []
    for p in pad_candidates:
        px,py,pw,ph = p
        dup = False
        for ux,uy,uw,uh in used:
            if abs(px-ux) < pw//2 and abs(py-uy) < ph//2:
                dup = True
                break
        if not dup:
            used.append(p)
            uniq.append(p)
    pad_candidates = uniq
    print('edge-based found', len(pad_candidates), 'pad candidates')

# Group pads into rows by Y
pad_candidates = sorted(pad_candidates, key=lambda r:(r[1], r[0]))
rows = []
for p in pad_candidates:
    x,y,ww,hh = p
    placed = False
    for r in rows:
        if abs(r[0][1] - y) < 20:
            r.append(p)
            placed = True
            break
    if not placed:
        rows.append([p])
rows = [sorted(r, key=lambda e:e[0]) for r in rows]
# pick rows with at least 3 pads
rows = [r for r in rows if len(r) >= 3]
# pick up to 4 top rows
pad_grid = []
if rows:
    for r in rows[:4]:
        pad_grid.extend(r[:4])

# If we didn't find a full 4x4 grid, try template-matching to recover missing pads
if len(pad_grid) < 16 and pad_candidates:
    print('pad grid incomplete:', len(pad_grid), '— attempting template matching')
    # choose a representative patch (largest, most square candidate)
    pad_candidates_sorted = sorted(pad_candidates, key=lambda r: (-(r[2]*r[3]), abs(r[2]-r[3])))
    tx,ty,tw,th = pad_candidates_sorted[0]
    # pad the template box a bit to include border
    pad = 4
    tx0 = max(0, tx-pad); ty0 = max(0, ty-pad)
    tx1 = min(w, tx+tw+pad); ty1 = min(h, ty+th+pad)
    template = gray[ty0:ty1, tx0:tx1]
    if template.size > 0 and template.shape[0] > 10 and template.shape[1] > 10:
        res = cv2.matchTemplate(gray, template, cv2.TM_CCOEFF_NORMED)
        # non-maximum suppression on response map
        thres = 0.58
        loc = np.where(res >= thres)
        pts = list(zip(loc[1], loc[0]))  # x,y positions of top-left
        # filter duplicates using grid-based suppression
        pts_sorted = sorted(pts, key=lambda p: (p[1], p[0]))
        filtered = []
        used = []
        for (px,py) in pts_sorted:
            too_close = False
            for (ux,uy) in used:
                if abs(px-ux) < tw//2 and abs(py-uy) < th//2:
                    too_close = True
                    break
            if not too_close:
                used.append((px,py))
                filtered.append((px,py))
        # convert to bounding boxes
        tm_pads = [(int(px), int(py), int(tw), int(th)) for px,py in filtered]
        # attempt to form rows by y
        tm_rows = []
        for p in tm_pads:
            x,y,ww,hh = p
            placed = False
            for r in tm_rows:
                if abs(r[0][1] - y) < th//2:
                    r.append(p)
                    placed = True
                    break
            if not placed:
                tm_rows.append([p])
        tm_rows = [sorted(r, key=lambda e:e[0]) for r in tm_rows]
        tm_rows = [r for r in tm_rows if len(r) >= 3]
        if len(tm_rows) >= 4:
            pad_grid = []
            for r in tm_rows[:4]:
                pad_grid.extend(r[:4])
            print('template matched grid size:', len(pad_grid))

# If still incomplete, try a spacing inference from first row
if len(pad_grid) < 16 and rows:
    print('pad grid still incomplete — attempting spacing inference')
    first_row = rows[0]
    if len(first_row) >= 3:
        # compute average pad width and spacing
        xs = [p[0] for p in first_row[:4]]
        ws = [p[2] for p in first_row[:4]]
        avg_w = int(sum(ws)/len(ws))
        # compute mean spacing between centers
        centers = [x + w//2 for x,w in zip(xs, ws)]
        spacings = [centers[i+1]-centers[i] for i in range(len(centers)-1)]
        avg_spacing = int(sum(spacings)/len(spacings)) if spacings else avg_w + 8
        # hypothesize grid positions
        base_x = xs[0]
        base_y = first_row[0][1]
        inferred = []
        avg_h_row = int(sum([p[3] for p in first_row])/len(first_row))
        for ry in range(4):
            for rx in range(4):
                ix = base_x + rx * avg_spacing
                iy = base_y + ry * (avg_h_row + 8)
                inferred.append((ix, iy, avg_w, avg_w))
        pad_grid = inferred
        print('inferred grid size:', len(pad_grid))

# Detect small buttons (group buttons) - rectangular small items
button_candidates = []
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    area = ww*hh
    if 12 < hh < 36 and 12 < ww < 48 and ww > hh*0.6:
        button_candidates.append((x,y,ww,hh))
button_candidates = sorted(button_candidates, key=lambda r:(r[1], r[0]))

# Detect the largest circular feature (jog wheel) via HoughCircles, cast to int
blur_med = cv2.medianBlur(gray, 9)
circles = cv2.HoughCircles(blur_med, cv2.HOUGH_GRADIENT, dp=1.2, minDist=200, param1=100, param2=30, minRadius=30, maxRadius=min(h,w)//2)
jog = None
if circles is not None:
    circles = np.uint16(np.around(circles))
    # choose the circle with largest radius
    best = max(circles[0,:], key=lambda c: int(c[2]))
    cx, cy, r = int(best[0]), int(best[1]), int(best[2])
    jog = (cx - r, cy - r, 2*r, 2*r, r)

# Screen detection: look for two dark rectangular screens (approx width >100 and height>50 and dark inside)
screens = []
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    if ww>100 and hh>40:
        mask = np.zeros(gray.shape, dtype=np.uint8)
        cv2.drawContours(mask, [c], -1, 255, -1)
        mean = cv2.mean(gray, mask=mask)[0]
        if mean < 60: # dark area
            screens.append((x,y,ww,hh))
screens = sorted(screens, key=lambda r:r[0])

# Build detections
detections = []
for i,(x,y,ww,hh) in enumerate(pad_grid):
    detections.append({'element':f'pad_{i}','x':int(x),'y':int(y),'w':int(ww),'h':int(hh)})
for i,(x,y,ww,hh) in enumerate(button_candidates[:32]):
    detections.append({'element':f'button_{i}','x':int(x),'y':int(y),'w':int(ww),'h':int(hh)})
if jog is not None:
    detections.append({'element':'jog','x':int(jog[0]),'y':int(jog[1]),'w':int(jog[2]),'h':int(jog[3]),'r':int(jog[4])})
for i,(x,y,ww,hh) in enumerate(screens[:4]):
    detections.append({'element':f'screen_{i}','x':int(x),'y':int(y),'w':int(ww),'h':int(hh)})

# save CSV
out_dir = Path('specs')
out_dir.mkdir(exist_ok=True)
csv_path = out_dir / 'measurements_3791B23_v2.csv'
with open(csv_path,'w') as f:
    f.write('element,x,y,w,h,extra\n')
    for d in detections:
        extra = d.get('r','')
        f.write(f"{d['element']},{d['x']},{d['y']},{d['w']},{d['h']},{extra}\n")
print('wrote', csv_path)

# draw overlay
overlay = img.copy()
for d in detections:
    x,y,w_,h_ = d['x'],d['y'],d['w'],d['h']
    cv2.rectangle(overlay,(x,y),(x+w_,y+h_),(0,255,0),2)
    cv2.putText(overlay,d['element'][:12],(x,y-6),cv2.FONT_HERSHEY_SIMPLEX,0.5,(0,255,0),1)
cv2.imwrite(str(out_dir / 'measurements_3791B23_v2_overlay.png'), overlay)
print('overlay saved', out_dir / 'measurements_3791B23_v2_overlay.png')

# Log summary
for d in detections:
    print(d)
