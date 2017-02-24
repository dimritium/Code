# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
n=int(raw_input())
lis=map(int,raw_input().split())
s_lis=sorted(lis)
r_lis=s_lis[::-1]
count_s=0
count_r=0
if s_lis[::-1]==lis:
    print 0
else:
	for i in range(n):
		if s_lis[i]!=lis[i]:
			count_s+=1
	for i in range(n):
		if r_lis[i]!=lis[i]:
			count_r+=1
	if count_r>count_s:
		count=count_s
	else:
		count=count_r
	print int(math.ceil(float(count)/2))