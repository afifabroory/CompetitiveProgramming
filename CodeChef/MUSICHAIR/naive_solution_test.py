while True:
    n_peer = int(input())

    counter = 1
    for i in range(2, n_peer):
        if n_peer%i == 1:
            print(i, end=' ')
            counter += 1

    print()
    print(counter)