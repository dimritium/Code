n = int(input())
lis = list(map(int,input().split()))
lis2 = [0]*n
res = 0
for i in range(n):
    lis2[i] = (lis[i] - i)
    if lis2[i] == 0:
        res += 1
mset = set([])
fnd = 0
for i in lis:
    if lis2[i] != 0:
        if i == lis[lis[i]] and i != lis[i]:
            # print ('i ', i)
            fnd = 1
            break

# print (lis2,lis2.count(0))
if fnd:
    res += 2
elif res!= n and res != (n-1):
    res += 1
print (res)