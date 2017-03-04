import math
tc=int(raw_input())
for i in range(tc):
	sum=1
	n=int(raw_input())
	if n==1:
		print 0
		continue
	for j in range(2,int(math.sqrt(n))+1):
		if(n%j==0 and j*j!=n):
			sum+=j+n/j;
		elif(n%j==0 and j*j==n):
			sum+=j
	print str(sum)