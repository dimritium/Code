def sum(a):
    a = list(str(a))
    a = list(map(int,a))
    su = 0
    for i in a:
        su+=i
    return str(su)
s = str(input())
res = 0
while(len(s)!=1):
    res+=1
    s = sum(s)
print (res)