t = int(input())
for i in range(t):
    k = int(input())
    n = int(input())
    p = list(map(int,input().split()))

    profits = [[0]*(n+1) for _ in range(n+1)]
    for i in range(k+1):
        profits[i][0] = 0
    for i in range(n+1):
        profits[0][i] = 0
    for i in range(1,k+1):
        for j in range(1,n):
            max_so = -1
            for m in range(j):
                max_so = max(max_so, p[j]-p[m]+profits[i-1][m])
            profits[i][j] = max(profits[i][j-1],max_so)
    print (profits[k][n-1])