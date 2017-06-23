ad = 22
lis = []
lis.append(6)
for i in range(106):
    lis.append(lis[-1]+ad)
    ad = ad+16
n = int(input())
it = 0
for k in range(n+1):
    print " "*(n-k),
    for i in range(k):
        print format(lis[it],'05'),
        it = it+1
    print