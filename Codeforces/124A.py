n,a,b = map(int,input().split())
set_a = set([])
set_b = set([])
for i in range(a+1,n+1):
    set_a.add(i)
for i in range(n-b,n+1):
    set_b.add(i)
# l = set_a&set_b
# print (l)
print (len(set_a&set_b))