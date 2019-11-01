def main():
    t, s = int(input().split()[1]), input()
    for _ in range(t):
        s = s.replace('BG', 'GB')
    print(s)

main()
