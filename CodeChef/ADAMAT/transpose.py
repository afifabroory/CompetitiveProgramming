N = int(input("Size of N: "))

matrix = []

for i in range(N):
    matrix.append(input().split())

L = (N-int(input("SubMatrix (1, L): ")))
print()

cnt = 0
for i in range(N-L):
    for j in range(cnt, N-L):
        tmp = matrix[i][j]
        matrix[i][j] = matrix[j][i]
        matrix[j][i] = tmp
    cnt += 1

for i in matrix:
    for j in i:
        print(j, end=" ")
    print()