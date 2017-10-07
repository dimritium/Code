n = int(input())
lis = list(map(int,(input().split())))
su = (lis.count(5)*5)
nof = (su//45)
if lis.count(0) is 0:
    print (-1)
elif lis.count(0)>0 and nof is 0:
    print (0)
else:
    print ('5'*(9*nof),end="")
    print ('0'*(lis.count(0)))
