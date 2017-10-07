t = int(input())
for i in range(t):
    n = int(input())
    lis = list(map(int,input().split()))
    l = 0
    r = n-1
    lis2 = [0 for _ in range(11)]
    while l<=r:
        if lis[l] == lis[r]:
            lis2[lis[l]] = 1
            l+=1
            r-=1
        else:
            break
    f = 0
    # print (lis2)
    for i in range(1,8):
        if not lis2[i]:
            f = 1
            break
    if f:
        print ("no")
    else:
        print ("yes")