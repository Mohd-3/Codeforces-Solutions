def dec(x):
    return int(x)-1

n = int(input())
a = [*map(dec, input().split())]
for d in range(n):
    s = set()
    t = a[d]
    s.add(d)
    while (t not in s):
        s.add(t)
        t = a[t]
    print(t+1, end=' ')
print()