n,k = map(int,input().split())
lis = list(map(int,input().split()))
car = 0
day = 0
f = 0

for i in range(n):
    lis[i]+=car
    car = max(lis[i]-8,0)
    lis[i] = min(8,lis[i])
    k = k - lis[i]
    if k<=0:
        f = 1
        day = i
        break    
if not f:
    print (-1)
else:
    print (day+1)