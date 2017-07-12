from sys import stdin
su=0
lis = [0]*1000000
def next(n):
    if n%2 == 0:
        return n//2
    else:
        return 3*n + 1

def rec(n):
    if n == 1:
        return 1
    if n<1000000 and lis[n]!=0:
        return (lis[n])
    length = 1+rec(next(n))
    if n<1000000:
        lis[n] = length
    return length

for line in stdin:
    try:
        n,m = map(int,line.strip().split())
        i,j = n,m
        i = min(n,m)
        j = max(n,m)
        res = 0
        for i in range(i,j+1):
            res = max(res,rec(i))
        print (n,m,res)
    except ValueError:
        exit()