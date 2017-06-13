import sys
sys.stdin = open(sys.argv[1],'r')
sys.stdout = open(sys.argv[2],'w')
MOD = 1000000007
tc = int(raw_input())
for i in range(tc):
    su = 0
    no = int(raw_input())
    lis = list(set(map(int,raw_input().split())))
    length = len(lis)
    for j in range(2,1<<length):
        li = []
        for k in range(length):
            if ((j&(1<<k))>0):
                li.append(lis[k])
        su = (su + max(li) - min(li))%MOD
    print "Case #"+str(i+1)+": "+str(su)