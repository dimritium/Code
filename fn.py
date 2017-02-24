from collections import OrderedDict
d=OrderedDict()
n=int(raw_input())
s=raw_input().strip()
for i in s.split():
	d[i]=s.count(i)
	s.replace(i,'')
def query(n,m):
	flag=0
	if n==0:
		for i in d:
			if d[i]>=m:
				print i
				flag=1
				break;
		if flag==0:
			print 0
	if n==1:
		for i in d:
			if d[i]==m:
				print i
				flag=1
				break;
		if flag==0:
			print 0
q=int(raw_input())
for i in range(q):
	ty,f=map(int,raw_input().strip().split())
	query(ty,f)