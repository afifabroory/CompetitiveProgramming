l = list(map(int, input().split()))
l.sort()
p = max(l)
c = 0
l1 = []

for j in range(1, p+1):
    if p%j == 0:
        l1.append((j, p//j))

for j in l1:
    l2 = []
    l2.append(j[0]*j[1])
    l2.append(j[0]/j[1])
    l2.append(j[0]-j[1])
    l2.append(j[0]+j[1])
    l2.sort()

    print(l)
    print(l2)
    print()
    if l == l2:
        print(j[0], j[1])
        c += 1
        break

if c == 0:
    print(-1, -1)