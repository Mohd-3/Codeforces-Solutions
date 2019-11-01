from fractions import Fraction
x, y, n = map(int, input().split())
f = Fraction(x, y).limit_denominator(n)
print(f.numerator, f.denominator, sep='/')
