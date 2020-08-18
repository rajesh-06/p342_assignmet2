with open('M.txt', 'r') as f:
    M = [[float(num) for num in line.split(' ')] for line in f]
print('M =', M)

with open('N.txt', 'r') as f:
    N = [[float(num) for num in line.split(' ')] for line in f]
print('N =',N)

A=[2,3,5]
print('A =',A)
p1=[[0,0,0], [0,0,0], [0,0,0]]
p2=[0,0,0]

for x in range(3):
    for i in range(3):
        for y in range(3):
            p1[x][y] = p1[x][y] + (M[x][i] * N[i][y]) 
print("Product of M*N =", p1)

for x in range(3):
	for y in range(3):
		p2[x] = p2[x] + (M[x][y] * A[y])		
print("Product of M*A =",p2)