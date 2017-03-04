tc=int(raw_input())
for i in range(tc):
	n,k,p=map(int,raw_input().split())
	ntn=range(1,n+1)
	li=map(int,raw_input().split())
	if (n-k)<p:
		print -1
	elif p<li[0]:
		print ntn[p-1]
	else:
		count=li[0]-1
		for i in range(len(li)):
			count+=nli[i]