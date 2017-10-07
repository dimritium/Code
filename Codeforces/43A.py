n = int(input())
dic = {}
for i in range(n):
    x = str(input())
    try:
        dic[x]+=1
    except:
        dic[x] = 1
lis = list(dic.keys())
if len(lis) is 1:
    print (lis[0])
elif dic[lis[0]]>dic[lis[1]]:
    print (lis[0])
else:
    print (lis[1])