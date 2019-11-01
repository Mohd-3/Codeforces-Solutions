t = int(input())
print('\n'.join(str(int((int(input())//6)**(1/2))) for _ in range(t)))