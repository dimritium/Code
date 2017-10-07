def findAns(lis):
    res = 0
    for i in lis:
        c = 0;
        while(i%2==0):
            c+=1
            i = i/2
        res+=c
    return res
tc = int(input())
for _ in range(tc):
    n = int(input())
    lis = list(map(int,input().split()))
    res = findAns(lis)
    # print ('res ',res)
    if res%2:
        print ('Charlie')
    else:
        print ('Alan')