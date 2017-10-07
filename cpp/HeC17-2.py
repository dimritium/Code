n = int(input())
lis_ans = [-1]*100005
lis = [0]*100005
dic = {}
lis_ans[1] = n
for i in range(n):
    x = int(input())
    try:
        dic[x]+=1
    except:
        dic[x] = 1
lis = dic.keys()
max_e = max(lis)           
q = int(input())
for i in range(q):
    x = int(input())
    if x>max_e:
        lis_ans[x] = 0
    elif lis_ans[x] == -1:
        lis_ans[x] = 0
        new_lis = list(filter(lambda y:y>=x,lis))
        for i in new_lis:
            if i%x == 0:
                lis_ans[x]+=dic[i]
        
    print (lis_ans[x])
