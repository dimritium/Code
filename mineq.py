# Enter your code here. Read input from STDIN. Print output to STDOUT
n,k = map(int,raw_input().split())
luck = 0
lis_imp = []
for i in range(n):
    l,t = map(int,raw_input().split())
    if t == 0:
        luck+=l
    else:
        lis_imp.append(l)
print lis_imp
lis_imp = sorted(lis_imp)
lis_imp = lis_imp.reverse()
z = 0
print lis_imp
for i in range(k):
    z+=1
    luck+=lis_imp[i]
for i in range(z,len(lis_imp)):
    luck-=lis_imp[z]
print luck