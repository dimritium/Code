n=int(raw_input())
li=list(map(int,raw_input().split()))
nli=[0]*n
nli[0]=li[0]
for i in range(1,n):
	nli[i]=li[i]+nli[i-1]
print nli
