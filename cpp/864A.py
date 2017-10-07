n = int(input())
lis = [0]*101
for i in range(n):
    x = int(input())
    lis[x]+=1
distints = 0
for i in range(1,101):
    if lis[i]:
        distints+=1
    if distints >2:
        break
if distints == 2:
    nos = []
    for i in range(1,101):
        if lis[i]:
            nos.append([i,lis[i]])
    if nos[0][1] == nos[1][1]:
        print ('YES')
        print (nos[0][0],nos[1][0])
    else:
        print ('NO')
else:
    print ('NO')