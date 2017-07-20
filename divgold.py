t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    s = str(raw_input())
    c = []
    for i in range(n):
        val = s[i]
        for j in range(n):
            q = list(s)
            q = q[0:i]+q[i+1:n]
            q = q[0:j]+[val]+q[j:n]
            c+=[q]
    ans = min(c)
    a = ''
    for i in ans:
        a+=i
    print a