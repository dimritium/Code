t = int(input())
stocks = list(map(int,input().split()))
k = int(input())
lis = []
for i in range(t):
    lis.append([stocks[i],i+1])
lis = sorted(lis,key=lambda x:x[0])
max_stocks = 0
for i in range(t):
    if lis[i][0] * lis[i][1] <= k:
        max_stocks+=lis[i][1]
        k-=lis[i][0]*lis[i][1]
    else:
        add = min(k//lis[i][0],lis[i][1])
        max_stocks+=add
        k -= lis[i][0]*add
    if k<0:
        break
print (max_stocks)
