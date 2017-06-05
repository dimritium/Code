tc = int(raw_input())
for i in range(tc):
    flag = 0
    lis = []
    len = int(raw_input())
    s = str(raw_input())
    s = s.replace('.','')
    if(not s or s[0] == 'T'):
        if not s:
            print 'Valid'
        else:
            print 'Invalid'
    else:
        for i in s:
            if i=='H' and not lis:
                lis.append('H')
                flag = 0
            elif i=='H' and lis:
                flag = 0
                break
            elif i == 'T' and lis:
                lis.pop()
                flag = 1
            elif i == 'T' and not lis:
                flag = 0
                break
        if flag:
            print "Valid"
        else:
            print "Invalid"