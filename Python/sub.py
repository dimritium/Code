n,m = map(int,raw_input().split())
res = abs(n-m)
if res%10 == 9:
    res-=1
else:
    res+=1
print res