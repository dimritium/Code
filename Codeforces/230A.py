s, n = map(int,input().split())
coll = []
for i in range(n):
    x, y = map(int,input().split())
    coll.append([x,y,0])

coll = sorted(coll,key=lambda x:x[1])
# print (coll)
# print (coll[10][1])
found = 1
kills = 0

while(found):
    found = 0
    for i in range(n-1,-1,-1):
        if coll[i][0]<s and coll[i][2] == 0:
            s += coll[i][1]
            coll[i][2] = 1
            kills+=1
            found = 1
            break
# print ("k",kills)
# print (coll)
if kills == n:
    print ('YES')
else:
    print ('NO')