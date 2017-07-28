#code
def remove(s):
    flag = 0
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            s = s[:i]+s[i+2:]
            flag = 1
            break
    if flag:
        return remove(s)
    return s
tc = int(input())
for i in range(tc):
    s = str(input())
    print (remove(s))