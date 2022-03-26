from math import sqrt, ceil

# 3 1
# 1 + 3 = 4
# 1 - 3 = -2
# 1 * 3 = 3
# 1/3 = 0

# 3 + 1 = 4
# 3 - 1 = 2
# 3 * 1 = 3
# 3/1 = 3

# 8 9
# 8 + 9 = 17
# 8 - 9 = -1
# 8 * 9 = 72
# 8 / 9 = 0

# 9 + 8 = 17
# 9 - 8 = 1
# 9 * 8 = 72
# 9 / 8 = 1

# 42 64
# 106 -22 2688 0

# -22 0 106 2688


def is_a_solution(a, b):
    global number
    tmp = list(number)
    cnt = 0
    flag = True

    for i in range(4):
        if (len(tmp) == 0):
            flag = False
            break
        elif (a + b) == tmp[i-cnt]:
            tmp.pop(i-cnt)
            cnt += 1
        elif (a - b) == tmp[i-cnt]:
            tmp.pop(i-cnt)
            cnt += 1
        elif (a * b) == tmp[i-cnt]:
            tmp.pop(i-cnt)
            cnt += 1
        elif (a // b) == tmp[i-cnt]:
            tmp.pop(i-cnt)
            cnt += 1
        else:
            flag = False
            break
    return flag

def factor(n):
    factorization = list()
    for d in range(1, n//2+1):
        if n%d == 0:
            factorization.append(d)
    return factorization


def solution():
    global number
    number = list(map(int, input().split()))
    number.sort()

    a = -1
    b = -1
    maximum = number[-1]
    factorization = factor(maximum)

    if maximum - number[-2] == 1: # One of them are 1
        if number[0] < 0:
            if is_a_solution(1, number[-1]-1):
                a = 1
                b = number[-1] - 1
        else:
            if is_a_solution(number[-1]-1, 1):
                a = number[-1] - 1
                b = 1

    elif number[0] < 0: # a < b
        for i in range(len(factorization)):
            m = factorization[i]
            n = maximum//m

            if is_a_solution(m, n):
                a = m
                b = n
                break
    else:
        for i in range(len(factorization)-1, -1, -1):
            m = factorization[i]
            n = maximum//m

            if is_a_solution(m, n):
                a = m
                b = n
                break

    print(f'{a} {b}')

number = None
test_case = int(input())
while test_case:
    solution()
    test_case -= 1