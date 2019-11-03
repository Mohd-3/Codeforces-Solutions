n, h, a, b, k = map(int, input().split())
for _ in range(k):
    t1, f1, t2, f2 = map(int, input().split())
    if t1 == t2:
        print(abs(f1-f2))
    else:
        sm = f1-b if f1 > b else (a-f1 if f1 < a else abs(f1-f2))
        sm += f2-b if f2 > b else (a-f2 if f2 < a else 0)
        sm += abs(t2-t1)
        print(sm)