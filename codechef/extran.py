t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    lis = map(int, raw_input().split())
    lis.sort()
    if((lis[1] - lis[0])!=1):
        print lis[0]
    elif((lis[-1]-lis[-2])!=1):
        print lis[-1]
    else:
        for i in range(n-1):
            if(lis[i]==lis[i+1]):
                print lis[i]