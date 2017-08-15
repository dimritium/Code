#code
tc = int(input())

for i in range(tc):
    n = int(input())
    lis = [0]*3
    lis1 = map(int,input().split())
    lis2 = []
    for j in lis1:
        lis[j]+=1
    
    for i in range(len(lis)):
        while(lis[i]):
            lis[i]-=1
            print (i,end=' ')
    print ()
    # lis2 = map(str,lis2)
    # print (' '.join(lis2))