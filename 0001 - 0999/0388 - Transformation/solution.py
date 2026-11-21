n = int(input())
steps = 0

while n != 1:
    if n % 2 == 1:
        n += 1
    else:
        n //= 2
    steps += 1

print(steps)