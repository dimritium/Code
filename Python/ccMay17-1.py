tc = int(raw_input())
for i in range(tc):
    s = str(raw_input())
    lis = []
    for j in s:
        lis.append(j)
    for i in range(len(lis)):
        if s[i] == 'm':
            if (i-1)>=0 and lis[i-1] == 's':
                lis[i-1] = ''
            elif (i+1)<len(lis) and lis[i+1] == 's':
                lis[i+1] = ''
    res = lis.count('m') - lis.count('s')
    if res > 0:
        print 'mongooses'
    elif res < 0:
        print 'snakes'
    else:
        print 'tie'