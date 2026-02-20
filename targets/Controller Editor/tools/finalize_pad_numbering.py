#!/usr/bin/env python3
from pathlib import Path
import csv

v3 = Path('specs/measurements_3791B23_v3.csv')
v2 = Path('specs/measurements_3791B23_v2.csv')
measured = Path('specs/maschine-layout-measured.csv')
svg = Path('specs/maschine-layout-v3.svg')

# read v3 pads
pads = []
with open(v3) as f:
    r = csv.DictReader(f)
    for row in r:
        pads.append(row)
# read other elements from v2 that are not pads
others = []
with open(v2) as f:
    r = csv.DictReader(f)
    for row in r:
        if not row['element'].startswith('pad_'):
            others.append(row)

# write measured CSV in canonical order: pad_1..pad_16, then others
with open(measured,'w') as f:
    f.write('element,x,y,w,h,source,notes\n')
    for p in sorted(pads, key=lambda x: int(x['number'])):
        f.write(f"{p['element']},{p['x']},{p['y']},{p['w']},{p['h']},renderPadsMatrix.cpp (measured),auto-detected\n")
    for o in others:
        f.write(f"{o['element']},{o['x']},{o['y']},{o['w']},{o['h']},measured,auto-detected\n")
print('wrote', measured)

# update svg: replace contents of <g id="pads" ...>...</g>
text = svg.read_text()
start_tag = '<g id="pads"'
start_idx = text.find(start_tag)
if start_idx == -1:
    print('pads group not found')
else:
    # find the group start '>'
    g_start = text.find('>', start_idx)
    g_end = text.find('</g>', g_start)
    if g_end == -1:
        print('pads group end not found')
    else:
        pad_group = '  <g id="pads" fill="none" stroke="#00FF66" stroke-width="2">\n'
        for p in sorted(pads, key=lambda x:int(x['number'])):
            el = p['element']
            x=int(p['x']); y=int(p['y']); w=int(p['w']); h=int(p['h'])
            rx = 6 if w>40 else 3
            pad_group += f'    <rect id="{el}" x="{x}" y="{y}" width="{w}" height="{h}" rx="{rx}"/>\n'
            # add label centered
            cx = x + w/2.0
            cy = y + h/2.0 + 4
            pad_group += f'    <text x="{cx:.1f}" y="{cy:.1f}" font-size="10" fill="#ffffff" text-anchor="middle">{int(p["number"])}</text>\n'
        pad_group += '  </g>'
        new_text = text[:start_idx] + pad_group + text[g_end+4:]
        svg.write_text(new_text)
        print('updated svg pads group')
