t = int(input())
for i in range(t):
    u,v,x = map(int,input().split())
    print ('{:.10f}'.format(x/(u+v)))