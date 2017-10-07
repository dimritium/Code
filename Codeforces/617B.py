n = int(input())
s = ''.join((input().split()))
lis = [i for i, ltr in enumerate(s) if ltr == '1']
res = 1
if not lis:
    print (0)
else:
    for i in range(len(lis)-1):
        res *= (lis[i+1]-lis[i])
    print (res)