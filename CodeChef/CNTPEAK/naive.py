import os
n = int(input())

clear = lambda : os.system('clear')

_sum = 0
strs = ""
for a in range(3):
	for i in range(3):
		for j in range(3):
			for k in range(3):
				print(a, i, j, k)

				opt = str(input())
				if opt == 'y':
					strs += (str(a)+str(i)+str(j)+str(k)) + '\n'
				clear()

			#for k in range(3):
				
print(strs)