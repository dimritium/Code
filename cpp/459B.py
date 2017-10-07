n = int(input())
lis = list(map(int,input().split()))
lis = list(sorted(lis))
c = 0
diff = lis[n-1] - lis[0]

r = lis.count(lis[0])
p = lis.count(lis[-1])

if lis[0] == lis[-1]:
    print (0,(r*(r-1))//2)
else:
    print (diff,(r*p)) 