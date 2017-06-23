n,k = map(int,(raw_input().split()))
modi = 2*k
lis1 = map(int,raw_input().split())
lis2 = map(int,raw_input().split())
temp = 0
for i in range(n):
    temp = temp + lis1[i]*lis2[i]
min_ele = min(lis2)
max_ele = max(lis2)
if min_ele < 0:
    min_ele = min_ele*(2)*k
elif min_ele > 0:
    min_ele = min_ele*(-2)*k
if max_ele < 0:
    max_ele = max_ele*(2)*k
elif max_ele > 0:
    max_ele = max_ele*(-2)*k 
min_ele = min(max_ele,min_ele)
print temp+min_ele   