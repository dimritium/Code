tc = int(raw_input())
for i in range(tc):
    x11,y11,x12,y12 = map(int,raw_input().split())
    x21,y21,x22,y22 = map(int,raw_input().split())
    if (x11==x21 and y11==y21) or (x12==x22 and y12==y22):
        print "yes"
    elif (x11==x22 and y11==y22) or (x12==x21 and y12==y21):
        print "yes"
    elif (y12-y11)==0 and (y22-y21)==0:
        if(x21>x11 and x21<x12) or (x22>x11 and x22<x12):
            print "yes"
        else:
            print "no"
    elif (x12-x11)==0 and(x22-x21)==0:
        if(y21>y11 and y21<y12) or (y22>y11 and y22<y12):
            print "yes"
        else:
            print "no"
    else:
        print "no"