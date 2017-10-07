n = int(input())
lis = list(map(int,input().split()))
neg = 0; pos = 0; zrs = 0
neg_l = []
pos_l = []
zrs_l = []
for i in lis:
    if i<0:
        neg_l.append(i)
        neg+=1
    elif i>0:
        pos_l.append(i)
        pos+=1
    else:
        zrs_l.append(i)
        zrs+=1
if pos == 0:
    pos_l.append(neg_l[0])
    pos_l.append(neg_l[1])

    del(neg_l[0])
    del(neg_l[0])
    if neg%2 ==0:
        zrs_l.append(neg_l[0])
        del(neg_l[0])

elif neg%2 == 0:
    zrs_l.append(neg_l[0])
    del(neg_l[0])
print (len(neg_l),' '.join(list(map(str,neg_l))))
print (len(pos_l),' '.join(list(map(str,pos_l))))
print (len(zrs_l),' '.join(list(map(str,zrs_l))))      
