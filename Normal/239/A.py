y, k, n = map(int, input().split())
sol = []
x = n
while (x%k != 0 and x > 0):
    x -= 1
while (x%k == 0 and x > 0):
    if (x-y > 0):
        sol.append(x-y)
    x -= k
if not sol:
    print(-1)
else:
    for d in sorted(sol):
        print(d, end=' ')
    print()
