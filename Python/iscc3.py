def findFirst(lis,lis_q):
    for i in range(len(lis)):
        if lis[i] == 0 and lis_q[i] == 0:
            return chr(i+97)
    return ''

def makeLisP(lis,p):
    lis = [0]*26
    for i in range(len(p)):
        lis[ord(p[i])-97]+=1

t = int(input())
for i in range(t):
    fl = 0
    p,q = map(str,input().split())
    lis_p = [0]*26
    lis_q = [0]*26
    for i in range(len(p)):
        lis_p[ord(p[i])-97] += 1
        lis_q[ord(q[i])-97] += 1
    
    for i in range(len(q)):
        if q[i]!=p[i]:
            # print (q[i],p[i])
            to_rep = findFirst(lis_p,lis_q)
            # print ('to',to_rep)
            if to_rep:
                # cnt_rep = p.count(p[i])
                p = p[:i] + p[i:].replace(p[i],to_rep)
                # print ('p',p)
                if(q[i] not in p):                                
                    p = p[:i] + p[i:].replace(p[i],q[i])
                else:
                    print ('NO')
                    fl = 1
                    break
                makeLisP(lis_p,p)
            else:
                print ('NO')

    if not fl:
        print (p,q)
        if p == q:
            print ('YES')
        else:
            print ('NO')
                