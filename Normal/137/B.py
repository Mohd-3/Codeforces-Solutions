n = int(input())
print(n-len(set(x for x in input().split() if int(x) <= n)))
