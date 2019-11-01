n = int(input())
for _ in range(n):
    s = input()
    print(s if len(s) <= 10 else s[0]+str(len(s[1:-1]))+s[-1])
