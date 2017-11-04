a,b,c = map(int,input().split())
ans = []
for i in range(1,82): #max summation of n (9 times 9)
    x = b*i**a+c
    if(x>0 and sum(map(int,list(str(x))))) == i and x<1e9:
        ans.append(x)
print (len(ans))
print (' '.join(map(str,ans)));