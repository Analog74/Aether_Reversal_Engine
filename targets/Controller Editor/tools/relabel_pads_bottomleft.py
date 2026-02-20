#!/usr/bin/env python3
import csv
from pathlib import Path

in_csv = Path('specs/measurements_3791B23_v2.csv')
out_csv = Path('specs/measurements_3791B23_v3.csv')
measured = Path('specs/maschine-layout-measured.csv')
svg = Path('specs/maschine-layout-v3.svg')

rows = []
with open(in_csv) as f:
    reader = csv.DictReader(f)
    for r in reader:
        rows.append(r)

# extract pad rows
pads = [r for r in rows if r['element'].startswith('pad_')]
# parse coordinates
pad_items = []
for p in pads:
    el = p['element']
    x = int(p['x']); y = int(p['y']); w = int(p['w']); h = int(p['h'])
    pad_items.append({'old':el,'x':x,'y':y,'w':w,'h':h})

# cluster into 4 rows by y using simple binning
ys = [p['y'] for p in pad_items]
miny, maxy = min(ys), max(ys)
# create 4 bins
import math
bins = []
if maxy==miny:
    # fallback
    bins = [miny + i for i in range(5)]
else:
    bins = [miny + i*(maxy-miny)/4.0 for i in range(5)]

rows_by_bin = [[] for _ in range(4)]
for p in pad_items:
    # find bin index
    for i in range(4):
        if p['y'] >= bins[i] and p['y'] <= bins[i+1]:
            rows_by_bin[i].append(p)
            break
    else:
        # if beyond range, put in last
        rows_by_bin[-1].append(p)

# rows_by_bin is top->bottom because miny is top; we need bottom->top ordering
# determine actual row order by averaging y, then sort rows by mean y descending
row_avgs = [(i, (sum([p['y'] for p in rows_by_bin[i]])/len(rows_by_bin[i]) if rows_by_bin[i] else 0)) for i in range(4)]
row_avgs_sorted = sorted([r for r in row_avgs if rows_by_bin[r[0]]], key=lambda t: t[1], reverse=True)
ordered_rows = [rows_by_bin[i] for i,_ in row_avgs_sorted]
# if we have fewer than 4 rows detected, fallback: split pads into 4 equal groups by y
if len(ordered_rows) < 4:
    pad_items_sorted = sorted(pad_items, key=lambda p:p['y'], reverse=True)
    ordered_rows = [pad_items_sorted[i::4] for i in range(4)]

# within each row, sort by x ascending (left to right)
for r in ordered_rows:
    r.sort(key=lambda p: p['x'])

# assign numbers 1..16 left-to-right, bottom-to-top
new_map = {}
num = 1
for row in ordered_rows:
    for p in row:
        new_name = f'pad_{num}'
        new_map[p['old']] = new_name
        p['new'] = new_name
        p['num'] = num
        num += 1

# write out new CSV
with open(out_csv,'w') as f:
    writer = csv.writer(f)
    writer.writerow(['element','x','y','w','h','number'])
    # write pads in numeric order
    for n in range(1,17):
        old = None
        for p in pad_items:
            if p.get('num') == n:
                old = p
                break
        if old:
            writer.writerow([old['new'], old['x'], old['y'], old['w'], old['h'], n])

# update measured CSV (maschine-layout-measured.csv) replace pad_0... with pad_N and update note
if measured.exists():
    lines = measured.read_text().splitlines()
    out_lines = []
    for L in lines:
        row = L
        for p in pad_items:
            if p['old'] in L:
                row = row.replace(p['old'], p['new'])
                row = row.replace('pad_0','pad_1')
        out_lines.append(row)
    measured.write_text("\n".join(out_lines))

# update SVG: replace id and add <text> label after each rect
svg_text = svg.read_text()
for p in pad_items:
    old_id = f'id="{p["old"]}"'
    new_id = f'id="{p["new"]}"'
    if old_id in svg_text:
        svg_text = svg_text.replace(old_id, new_id)
    # add a text label element after the rect (approx center)
    rect_token = f'<rect id="{p["new"]}"'
    # find insertion point
    idx = svg_text.find(rect_token)
    if idx!=-1:
        # find end of rect tag
        end = svg_text.find('/>', idx)
        if end!=-1:
            # compute center
            cx = p['x'] + p['w']/2
            cy = p['y'] + p['h']/2 + 4
            label = f'\n    <text x="{cx:.1f}" y="{cy:.1f}" font-size="10" fill="#ffffff" text-anchor="middle">{p["num"]}</text>'
            svg_text = svg_text[:end+2] + label + svg_text[end+2:]

svg.write_text(svg_text)
print('wrote', out_csv)
print('updated measured CSV and SVG')
