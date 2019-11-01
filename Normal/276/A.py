n, k, = map(int, input().split())
m, li = 0, []
for _ in range(n):
    f, t = map(int, input().split())
    li.append(f if t < k else f-(t-k))
print(max(li))
