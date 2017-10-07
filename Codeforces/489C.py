import sys
n, s = map(int,input().split())
max_n = [0]*n
min_n = [0]*n
min_n[0] = 1
if s is 0 and n>1:
    print (-1,-1)
    sys.exit(0)
if s is 0 and n is 1:
    print (0,0)
    sys.exit(0)
if s>9*n:
    print (-1,-1)
    sys.exit(0)
s1 = s-1

for i in range(n):
    if s>=9:
        max_n[i] = 9
        s = s-9
    elif s<9 and s is not 0:
        max_n[i] = s
        s = 0

for i in range(n):
    if s1>=9:
        min_n[n-i-1] = 9
        s1 = s1-9
    elif s1<9 and s1 > 0:
        if n-i-1 is 0:
            min_n[n-i-1] = s1+1
        else:
            min_n[n-i-1] = s1
        s1 = 0

max_n = map(str,max_n)
max_n = "".join(max_n)
min_n = map(str,min_n)
min_n = "".join(min_n)

print (min_n,max_n)