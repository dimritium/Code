n, m = map(int,input().split())
lis = list(map(int,input().split()))
start = 1
res = 1
for i in lis:
    if i >= start:
        res+=(i-start)
    else:
        res+=(n-start)+i
    start = i
print (res-1)