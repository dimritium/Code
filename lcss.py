#code
t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    s1 = list(map(str,input().split()))
    s2 = list(map(str,input().split()))
    if(n<m):
        n,m = m,n
        s2,s1 = s1,s2
    lis = [[0]*(n+1)]*(m+1)
    # print (s1)
    # print (s2)
    # for i in range(m+1):
    #     print (lis[i])
    s = 0
    for i in range(1,(m+1)):
        for j in range(1,(n+1)):
            if(s2[i-1] == s1[j-1]):
                # print (i,j,s2[i-1],s1[j-1])
                lis[i][j] = lis[i-1][j-1]+1
                s = max(s,lis[i][j])
    # for i in range(m+1):
    #     print (lis[i])
    print (s)