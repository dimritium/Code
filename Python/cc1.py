t = int(input())
for i in range(t):
    n = int(input())
    s = str(input())
    t = str(input())
    dic = {}
    dic_t = {}
    for i in range(n):
        try:
            dic[s[i]] += 1
        except:
            dic[s[i]] = 1
        try:
            dic_t[t[i]] += 1
        except:
            dic_t[t[i]] = 1
    
    print (dic)
    print (dic_t)
    i = 0
    for i in range(n):
        # print ("s",dic[s[i]],s[i])
        if dic[s[i]] == 1 and (s[i] in t) and (t[i] in s):
            # print (s[i],t[i])
            dic[s[i]]-=1
            dic[t[i]]+=1
            dic_t[s[i]]+=1
            dic_t[t[i]]-=1

        elif dic_t[t[i]] == 1 and t[i] in s and s[i] in t:
            dic_t[t[i]]-=1
            dic_t[s[i]]+=1
            dic[t[i]]+=1
            dic[s[i]]-=1
        i+=1

    cnt1=0
    for k,v in dic.items():
        if dic[k]!=0:
            
            cnt1+=1
    cnt2=0
    for k,v in dic_t.items():
        if dic_t[k]!=0:
            cnt2+=1
    # print (cnt1,cnt2)
    print (max(cnt1,cnt2))