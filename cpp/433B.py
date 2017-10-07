n = int(input())
lis = list(map(int,input().split()))
lis_sec = sorted(lis)
for i in range(1,n):
    lis[i] += lis[i-1]
    lis_sec[i] += lis_sec[i-1]
q = int(input())
for i in range(q):
    q,l,r = map(int,input().split())
    if q == 1:
        if l==1:
            print (lis[r-1])
        else:
            print (lis[r-1]-lis[l-2])
    else:
        if l==1:
            print (lis_sec[r-1])
        else:
            print (lis_sec[r-1] - lis_sec[l-2])
