def update(res,s):
    if '1' in s:
        res[1]+=1
    if '2' in s:
        res[2]+=1
    if '3' in s:
        res[3]+=1
    if '4' in s:
        res[4]+=1
    if '5' in s:
        res[5]+=1
    if '6' in s:
        res[6]+=1
    if '7' in s:
        res[7]+=1
    if '8' in s:
        res[8]+=1
    if '9' in s:
        res[9]+=1
s = str(input())
n = len(s)
lis = []
res = [0]*10
for i in range(n):
    for j in range(n-i):
        lis.append([s[j:j+i+1]])
        update(res,s[j:j+1+i])
q = int(input())
for i in range(q):
    print (res[int(input())])
# print (lis)