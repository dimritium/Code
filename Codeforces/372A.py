#use bin search you shit
n = int(input())
lis = []
for i in range(n):
    x = int(input())
    lis.append(x)

lis = sorted(lis)
last_e = lis[-1]
count = 0
for i in range(len(lis)-1):
    if(last_e>=2*lis[i]):
        count+=1
    else:
        break

if n%2:
    count = min(count,n//2)
else:
    count = int(min(count,n//2-1))
# print (count)
if count == 0:
    print (n)
else:
    res = 0
    j = count
    last = n-1
    k = 1
    no_times = 0
    while(k):
        if lis[j]*2<=lis[last]:
            res+=1
            j-=1
            last-=1
        elif j == -1:
            k = 0
        else:
            no_times+=1
            j -= 1
        if no_times>1:
            k = 0
    
    print (n-res)