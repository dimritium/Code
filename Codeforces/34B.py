m, n = map(int,input().split())
lis = list(map(int,input().split()))
lis = sorted(lis)
res = 0
pick = 0
for i in lis:
    if i<0 and pick<n:
        pick+=1
        res+=(-i)
    else:
        break
print (res)