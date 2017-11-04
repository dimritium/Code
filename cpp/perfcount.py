tc = int(input())
for i in range(tc):
    n, p = map(int,input().split())
    lis = list(map(int,input().split()))
    cw = 0
    ha = 0
    fnd = 1
    for item in lis:
        if item<=(p/10):
            ha+=1
        elif item>=(p/2):
            cw+=1
        if cw>1 or ha>2:
            fnd = 0
            break
    if fnd:
        if cw == 1 and ha == 2:
            print ('yes')
        else:
            print ('no')
    else:
        print ('no')