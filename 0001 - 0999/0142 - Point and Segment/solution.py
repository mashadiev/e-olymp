ax, ay, bx, by, cx, cy = map(float, input().split())

ab = ((bx - ax) ** 2 + (by - ay) ** 2) ** 0.5
ac = ((cx - ax) ** 2 + (cy - ay) ** 2) ** 0.5
bc = ((bx - cx) ** 2 + (by - cy) ** 2) ** 0.5

if ab + ac == bc:
    print("1")
else:
    print("0")