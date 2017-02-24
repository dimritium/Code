g=int(raw_input())
for i in range(g):
    n=int(raw_input())
    di={}
    s=map(str,raw_input())
    for i in s:
        try:
            d[i]+=1
        except:
            d[i]=1
    if d['_']>=1:
        flag=0
        for i in di:
            if d[i]==1 and i!='_':
                flag=1
        if flag==0:
            print 'YES'
        else:
            print 'NO'
    else:
        pass