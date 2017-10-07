n, m = map(int,input().split())
lis = list(map(int,input().split()))
lis = sorted(lis)
min_diff = 2**30
for i in range(m-n+1):
    if lis[i+n-1] - lis[i] < min_diff:
        min_diff = lis[i+n-1] - lis[i]
print (min_diff)