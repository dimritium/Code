n = int(input())
lis = list(map(int,input().split()))
lis = sorted(lis)
lis[0],lis[-1] = lis[-1],lis[0]
lis = list(map(str,lis))
print (" ".join(lis))