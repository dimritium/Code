n = int(input())
s = str(input())
lis_cap = []
for i in range(len(s)):
    if (s[i]).isupper():
        lis_cap.append(i)
if not lis_cap or lis_cap[-1] != n-1:
    lis_cap.append(n)
lis_ans = []
start = 0
for i in lis_cap:
    end = i
    se = set([])
    for j in range(start,end):
        se.add(s[j])
    start = end+1
    lis_ans.append(len(se))
print (max(lis_ans))
