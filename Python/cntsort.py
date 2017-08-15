n = int(raw_input())
lis = map(int, raw_input().split())
max_e=max(lis)
aux=[0]*(max_e+1)
sort_lis=[0]*(n+1)
j=1
for i in range(n):
    aux[lis[i]] = aux[lis[i]]+1
# print aux
for i in range(1,max_e+1):
    tmp = aux[i]
    while tmp>0:
        sort_lis[j]=i
        j=j+1;
        tmp = tmp-1
prev=-1
# print sort_lis;
for i in range(0,max_e+1):
    new=sort_lis[i]
    if prev!=new:
        if sort_lis[i]!=0:
            print sort_lis[i], aux[sort_lis[i]]
    prev=new