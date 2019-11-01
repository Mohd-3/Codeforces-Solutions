t = int(input())
while (t):
    input()
    print(sum(1 for x in input().split() if x != '0'))
    t-=1
#print(sum(1 for x in ((input(), input().split())[1] for _ in range(t)) if x != '0'))