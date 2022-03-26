from math import sqrt, floor

def factor(n):
    factorization = list()
    for d in range(1, n+1):
        if n%d == 0:
            factorization.append(d)
    return factorization

print(factor(99))
