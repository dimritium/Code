#code
t = int(input())
for i in range(t):
    n = int(input())
    lis = map(int,input().split())
    lis2 = map(int,input().split())
    cnt = 0;time = 0;guests = 0;i=0;j=0
    while(i<n and j<n):
        while(lis[i]<=lis[j]):
            cnt+=1
            if cnt>guest:
                time = lis[i]
            guests = max(cnt,guests)
            i+=1
        if(lis[i]>lis[j]):
            cnt-=1
            j+=1
    print (guests,time)