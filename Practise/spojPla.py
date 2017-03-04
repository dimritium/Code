import math
tc=int(raw_input())
for i in range(tc):	
	n=int(raw_input());max=0;ind=0;
	for x in range(n):
		a,b=map(int,raw_input().strip().split())
		d=math.sqrt(a**2+b**2)
		if(d>max):
			max=d
			ind=x+1
	print "Case "+str(i+1)+": "+str(ind)+"\n"