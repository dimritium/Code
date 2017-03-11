v,c,f,p=map(int,raw_input().split())
vg,cg,fg,pg=0,0,0,0
n=int(raw_input())
lis=[[]]*n
for i in range(n):
    lis[i]=map(int,raw_input().split())
for i in range(n):
    vg,cg,fg,pg=vg+lis[[i][0]],cg+lis[[i][1]],fg+lis[[i][2]],pg+lis[[i][3]]
if(vg>=v and cg>=c and fg>=f and pg>=p):
    print 'YES'
else:
    print 'NO'
