t = int(input())
res = 0
n_sum = 0
for i in range(t):
    a,b = map(int,input().split())
    n_sum = n_sum + b - a
    res = max(n_sum, res)
print (res)