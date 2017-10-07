import math
n, k = map(int,input().split())
x = list(map(int,input().split()))
y = list(map(int,input().split()))
res = []
for i in range(n):
    res.append(math.sqrt(x[i]**2+y[i]**2))
res = sorted(res)
print (math.ceil(res[k-1]))