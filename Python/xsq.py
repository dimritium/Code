t = int(input())
for i in range(t): 
    lis = [0]*26
    s = str(input())
    f = 0
    for i in range(len(s)):
        ind = ord(s[i])-97 
        lis[ind]+=1
        if lis[ind]>1:
            f = 1
            print ('Yes')
            break 
        if f:
            break
    if not f:
        print ('No')