total = 2**32 - 100000 + 1

t = int(input())
for i in range(t):
    lis = []
    lis.append(100000)
    lis.append(100000)
    total_ = total - lis[0] - lis[1]
    n = int(input())
    dist = total_//n
    for i in range(2,n-1):
        lis.append(dist)
    lis.append(total - (dist*(n-3) + lis[0] + lis[1]))
    if lis[-1] > 100000:
        inc_v = lis[-1] - 100000
        lis[-1] = 100000
        dist = inc_v//10000
        last = (inc_v) - (dist)*10000        
        i = 2
        while(inc_v>0):
            lis[i] += (dist)
            inc_v -= dist
            i += 1
        lis[i] += last

    print (' '.join(map(str,lis)))
    print ()