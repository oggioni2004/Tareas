
#Santiago arango y richard oggioni narvaez

#ciclos fibonacci
def fibo(n):
	a = 0
	b = 1

	for k in range(n):
		c = a + b 
		a = b
		b = c

	return b
fibo()

#recursivo fibonacci
def fibonnaci(n):
	if (n == 0 or n == 1):
		return 1

	else:
		return fibonnaci(n-1)+fibonnaci(n-2)

fibonnaci()