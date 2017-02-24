v=[];
print "Enter no of elements";
n=int(raw_input())
for i in range(0,n):
	x=int(raw_input())
	v.append(x)
v.sort()
if n%2==0:
	median=(v[n/2-1]+v[n/2])/2.0;
else:
	median=(v[n/2]);
print "Median is",median;