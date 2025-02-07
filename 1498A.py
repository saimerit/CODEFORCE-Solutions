import math
def sumofdigits(x):
    return sum(int(digit) for digit in str(x))
def gcdsum(n):
    while True:
        jk = math.gcd(n, sumofdigits(n))
        if jk == 1:
            n += 1
        else:
            print(n)
            break

t = int(input())
for i in range(t):
    n = int(input())
    gcdsum(n)