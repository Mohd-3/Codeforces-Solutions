n, k = map(int, input().split())
print(sum(1 for x in input().split() if int(x)+k <= 5)//3)
