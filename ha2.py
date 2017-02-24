tc=int(raw_input())
for i in range(n):
	max=0;end=0
	n=int(raw_input())
	lis1=list(map(int,raw_input().split()))
	lis2=list(map(int,raw_input().split()))
	if n%2==0:
		end=n/2-1
	else:
		end=n/2
	for i in range(end):
		if lis2[n-i-1]>lis1[i]:
			nMax=(n-2i)
	print max
def monkiness(a,b):
