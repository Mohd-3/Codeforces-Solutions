s = input()
print('YNEOS'[not any(x in s for x in 'HQ9')::2])
