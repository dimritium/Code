n = int(input())
dic = {}
for i in range(n):
    s = str(input())
    if not s in dic:
        dic[s] = 0
        print ('OK')
    else:
        dic[s]+=1
        print (s+str(dic[s]))