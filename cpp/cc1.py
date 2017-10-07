t = int(input())
for i in range(t):
    s = str(input())
    dic = {}
    for i in range(len(s)):
        try:
            dic[s[i]].append(i)
        except:
            dic[s[i]] = [i]
    
    for k,v in dic.items():
        flag = 0
        if len(dic[k])>1:
            if dic[k][-1]!=len(s)-1:
                dic[k].append(len(s)-1)
            for j in range(len(v)-2):
                new_s = re.compile(r"["+s[dic[k][j]:dic[k][j+1]]+"]")
                for l in range(j+1,len(v))
