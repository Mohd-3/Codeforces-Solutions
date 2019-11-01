input()
print(' '.join(str(x[0]) for x in sorted([(i, int(x)) for i, x in enumerate(input().split(), 1)], key=lambda x: x[1])))

