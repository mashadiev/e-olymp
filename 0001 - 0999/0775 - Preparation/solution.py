a, b, c = map(int, input().split())
mssv = list(map(int, input().split()))

x = b * c
mssv.sort(reverse=True)

total = 0
k = 0

for m in mssv:
    total += m
    k += 1

    if total >= x:
        break

print(k)
