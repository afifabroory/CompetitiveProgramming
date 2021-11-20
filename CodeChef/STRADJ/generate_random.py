import random

while True:
    string = ''
    totalMove = random.randrange(2,21)
    for i in range(totalMove):
      
      char = str(random.randrange(2))
      string += char

    print(totalMove)
    print(string)
    input()

