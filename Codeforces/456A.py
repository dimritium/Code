import sys
n = int(input())
lis = []
for i in range(n):
    x,y = map(int,input().split())
    lis.append([x,y])
lis = sorted(lis,key = lambda x:x[0])
for i in range(n-1):
    if lis[i][1]>lis[i+1][1]:
        print ('Happy Alex')
        sys.exit(0)
print ("Poor Alex")