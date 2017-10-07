n = int(input())
dic = {}
s = str(input())
for i in s:
    try:
        dic[i]+=1
    except:
        dic[i] = 1
poss = 1 
for k,v in dic.items():
    if v%n == 0:
        pass
    else:
        poss = 0
        break
  
if poss:
    for _ in range(n):
        for k,v in dic.items():
            print (k*(v//n),end="")
else:
    print (-1)