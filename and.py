tc=int(raw_input())
for i in range(tc):
	n,m=map(int,raw_input().split())
	lis=[x for x in range(1,n+1)]
	maxno=0
	for j in range(n-1):
		for k in range(j+1,n):
			if (lis[j]&lis[k])>maxno and (lis[j]&lis[k])<m:
				maxno=(lis[j]&lis[k])
	print maxno