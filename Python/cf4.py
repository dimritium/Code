n,k = map(int,input().split())
lis = list(map(int,input().split()))
n_lis = [0]*101
for i in range(len(lis)):
    n_lis[lis[i]]+=1
el = lis[k-1]
res = 0
for i in range(el, len(n_lis)):
    if i:
        res+=n_lis[i]
print (res)