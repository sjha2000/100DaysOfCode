#x = int(input("enter an integer: "))
#if x<0:
#	x = 0
#	print("negative changed to zero")
#elif x == 0:
#	print("zero")
#elif x == 1:
#	print('single')
#else:
#	print('more')
#words = ['cat', ' window', 'defenestrte']
#for w in words:
#	print(w, len(w))
#for i in range(5):
#	print(i)

#for n in range(2, 10):
#     for x in range(2, n):
#         if n % x == 0:
#             print(n, 'equals', x, '*', n//x)
#             break
#     else:
#         # loop fell through without finding a factor
#         print(n, 'is a prime number')


def fib(n):
	a, b = 0, 1
	while a < n:
		print(a, end = ' ')
		a, b = b, a+b
	print()

fib(2000000000000000000000000000000000000000000000000000000000000)
