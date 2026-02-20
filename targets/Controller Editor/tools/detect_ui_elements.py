#!/usr/bin/env python3
import cv2
import numpy as np
from pathlib import Path

img_path = Path('assets/images/3791B23_image.png')
if not img_path.exists():
    print('missing', img_path)
    raise SystemExit(1)
img = cv2.imread(str(img_path))
h, w = img.shape[:2]
print('image', w, h)

gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# detect dark large regions (screens)
th = cv2.threshold(gray, 40, 255, cv2.THRESH_BINARY_INV)[1]
contours, _ = cv2.findContours(th, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
regions = []
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    area = ww*hh
    if area>5000 and ww>100 and hh>40:
        regions.append(('screen',x,y,ww,hh,area))

# detect circles (jog wheel)
blur = cv2.medianBlur(gray,9)
circles = cv2.HoughCircles(blur, cv2.HOUGH_GRADIENT, dp=1.2, minDist=50, param1=100, param2=30, minRadius=20, maxRadius=min(h,w)//2)
circle_res=[]
if circles is not None:
    circles = np.uint16(np.around(circles))
    for c in circles[0,:]:
        circle_res.append(('jog', c[0]-c[2], c[1]-c[2], c[2]*2, c[2]*2, c[2]))

# detect pads: small near-square contours
pad_contours=[]
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    area = ww*hh
    if 400<area<10000 and 0.7<ww/hh<1.4 and ww>20 and hh>20:
        # check mean intensity inside
        mask = np.zeros(gray.shape, dtype=np.uint8)
        cv2.drawContours(mask, [c], -1, 255, -1)
        mean = cv2.mean(gray, mask=mask)[0]
        if mean>30 and mean<200:
            pad_contours.append((x,y,ww,hh))

# cluster pads by approximate grid
pads = sorted(pad_contours, key=lambda r:(r[1], r[0]))
# try to find a 4x4 grid by grouping
pad_grid = []
if len(pads)>=8:
    # cluster rows by y
    rows = []
    for x,y,ww,hh in pads:
        placed=False
        for row in rows:
            if abs(row[0][1]-y)<10:
                row.append((x,y,ww,hh))
                placed=True
                break
        if not placed:
            rows.append([(x,y,ww,hh)])
    rows = [sorted(r, key=lambda e:e[0]) for r in rows]
    if len(rows)>=2:
        # flatten and take first 4 rows of up to 4 cols
        for r in rows:
            pad_grid.extend(r)

# detect small buttons (group buttons)
small_buttons=[]
for c in contours:
    x,y,ww,hh = cv2.boundingRect(c)
    area = ww*hh
    if 200<area<2000 and 15<ww<40 and 12<hh<30:
        small_buttons.append((x,y,ww,hh))

# Build detections
detections = []
for r in regions:
    detections.append({'element':'screen','x':r[1],'y':r[2],'w':r[3],'h':r[4],'info':r[5]})
for c in circle_res:
    detections.append({'element':'jog','x':c[1],'y':c[2],'w':c[3],'h':c[4],'info':c[5]})
for i,(x,y,ww,hh) in enumerate(pad_grid[:16]):
    detections.append({'element':f'pad_{i}','x':x,'y':y,'w':ww,'h':hh,'info':None})
for i,(x,y,ww,hh) in enumerate(small_buttons[:20]):
    detections.append({'element':f'button_{i}','x':x,'y':y,'w':ww,'h':hh,'info':None})

# save CSV
out_dir = Path('specs')
out_dir.mkdir(exist_ok=True)
csv_path = out_dir / 'measurements_3791B23.csv'
with open(csv_path,'w') as f:
    f.write('element,x,y,w,h,info\n')
    for d in detections:
        f.write(f"{d['element']},{d['x']},{d['y']},{d['w']},{d['h']},{d['info']}\n")
print('wrote', csv_path)

# draw overlay
overlay = img.copy()
for d in detections:
    x,y,w_,h_ = d['x'],d['y'],d['w'],d['h']
    cv2.rectangle(overlay,(x,y),(x+w_,y+h_),(0,255,0),2)
    cv2.putText(overlay,d['element'][:12],(x,y-6),cv2.FONT_HERSHEY_SIMPLEX,0.4,(0,255,0),1)
cv2.imwrite(str(out_dir / 'measurements_3791B23_overlay.png'), overlay)
print('overlay saved', out_dir / 'measurements_3791B23_overlay.png')

# Print summary
for d in detections:
    print(d)
