tc = int(raw_input())
for i in range(tc):
    s = []
    len = int(raw_input())
    lis = map(int, raw_input().split())
    if len%2==0:
        print 'no'
        continue
    elif lis[0]!=1:
        print 'no'
        continue
    for i in range(1,(len/2)+1):
        s.append(i)
    for i in range(len/2+1,0,-1):
        s.append(i)
    if s==lis:
        print 'yes'
    else:
        print 'no'