def solution():
    x, y, *rival = input().split()

    medal = 2
    medal -= 1 if x in rival else 0
    medal -= 1 if y in rival else 0
    print(medal)

test_case = int(input())
while test_case:
    solution()
    test_case -= 1