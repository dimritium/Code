n = int(input())
lis = []
for i in range(n):
    h,m = map(int,input().split())
    lis.append([h,m])
ans_lis = []
ph = -1; pm = -1
res = 1
ans = 0
for i in range(n):
    if ph == lis[i][0] and pm == lis[i][1]:
        res+=1
    else:
        res = 1
    ans = max(res,ans)
    ph = lis[i][0]
    pm = lis[i][1]
print (ans)