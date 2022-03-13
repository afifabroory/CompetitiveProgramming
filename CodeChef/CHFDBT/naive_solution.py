from math import ceil

n = int(input('Enter N: '))
#number_list = [-1] * n

number_list = []
for i in range(0, n):
    number_list.append(-1)

for i in range(1, n+1):

    if number_list[i-1] == -1:
        tmp = i
        while tmp <= n:
            number_list[tmp-1] = i
            tmp *= 2

print('Answer:')
print(ceil(n/2))
print('Expected Answer:')
print(len(set(number_list)))
