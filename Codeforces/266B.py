n, k = map(int,input().split())
s = str(input())
pos_bys = [i for i,ch in enumerate(s) if ch == 'B']

le = len(pos_bys)
for i in range(k):
    for j in range(len(pos_bys)):
        if j == le-1:
            if pos_bys[j]<n-1:
                pos_bys[j]+=1
        elif pos_bys[j+1]!=pos_bys[j]+1:
            pos_bys[j]+=1

res = ""
for i in range(n):
    if i in pos_bys:
        res+='B'
    else:
        res+='G'
print (res)