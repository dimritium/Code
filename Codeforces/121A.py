def findNext(a):
    a = str(a)
    res = ''
    if a[0]<'4':
        res = '4'*len(a)
    elif a[0]<'7':
        res+='7'
        res+='4'*(len(a)-1)
    else:
        if a[0] == '4':
            chk_for_svn = 1
            for i in a[1:]:
                if i == '4':
                    chk_for_svn+=1
