s,n=map(int,raw_input().split())
li=[[0 for x in range(3)]for x in range(n)]
for i in range(n):
	w,v=map(int,raw_input().split())
	li[i][0],li[i][1],li[i][2]=w,v,float(v)/w

li=sorted(li,key=lambda l:l[2],reverse=True)
nw,val=0,0
print li
for i in range(len(li)):
	if (li[i][0]+nw)<=s:
		nw=nw+li[i][0]
		val=val+li[i][1]
	elif li[i][0]>s:
		continue;
	elif li[i][0]+nw>s:
		break;
print val