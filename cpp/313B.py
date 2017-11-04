s = str(input())
len_ = len(s)
lis = []
lis.append(0)
for i in range(len_ - 1):
    if s[i] == s[i+1]:
        lis.append(lis[-1]+1)
    else:
        lis.append(lis[-1])

m = int(input())
for _ in range(m):
    l, r = map(int,input().split())
    print (lis[r-1]-lis[l-1])