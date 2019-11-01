t = int(input())
while (t):
    s, a, b, c = map(int, input().split())
    s = s//c
    e = s//a
    print(s + e*b)
    t -=1;

