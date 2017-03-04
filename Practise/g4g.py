tc=int(raw_input())
for i in range(tc):
	li=[];sh=0
	k,n=map(int,raw_input().strip().split(" "))
	kr=map(int,list(raw_input().strip().split(" ")))
	for i in range(len(kr)):
		li.append(kr[i]*kr[i])
	size=len(li)

	pi=map(int,list(raw_input().strip().split(" ")))
	#print len(pi)
	for j in range(len(pi)/2):
		#x,y=map(int,raw_input().strip().split(" "))
		a=(pi[j]*pi[j]) + (pi[j+1]*pi[j+1])
		j=j+2
		for k in range(size-1,-1,-1):
			if a<=li[k]:
				sh=sh+k+1
				break
	print sh