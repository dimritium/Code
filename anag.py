#code
tc = int(input())
    s = str(input())
    s2 = str(input())
    dic = {}
    dic2 = {}
    for i in s:
        try:
            dic[i]+=1
        except:
            dic[i] = 1
            
    for i in s2:
        try:
            dic2[i]+=1
        except:
            dic2[i] = 1
    fl = 0
    for k,v in dic.items():
        if dic[k] != dic2[k]:
            fl = 1
            print ("NO")
            break
    if not fl:
        print ("YES")