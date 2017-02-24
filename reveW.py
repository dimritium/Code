n,q=map(int,raw_input().split())
li=list(map(int,raw_input().split()))
def winner(l,r):
	s=""
	for i in range(l-1,r):
		s+=str((li[i]/2)%2)
	print s
	if s.count("1")%2==0:
		print 'Hacker'
	else:
		print 'Mishki'
for i in range(q):
	l,r=map(int,raw_input().split())
	winner(l,r)

