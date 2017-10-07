n = int(input())
lis = list(map(int,input().split()))
indexes = [False]*30002

for i in lis:
    indexes[i] = True
for i in range(1,30001):
    if not indexes[i]:
        print (i)
        break
# print (indx)