import math
lis_primes = [True]*1000001
lis_primes[0] = lis_primes[1] = False
for i in range(2,int(math.sqrt(10000001))):
    for j in range(i*i,1000001,i):
        lis_primes[j] = False
lis_ans = []
for i in range(len(lis_primes)):
    if lis_primes[i]:
        lis_ans.append(i*i)

print (lis_ans)
n = int(input())
inp = list(map(int,input().split()))
for i in inp:
    if i in lis_ans:
        print("YES")
    else:
        print("NO")