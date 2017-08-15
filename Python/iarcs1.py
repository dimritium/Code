import re

n = int(raw_input())
res = []
for i in range(n):
    mstring = str(raw_input()).lower()
    mstring = re.sub(r'[\W]+',r' ',mstring)
    mstring = mstring.strip() 
    nstr = re.sub(r'[.|\'|,|;|:]',r'',mstring)
    lis = nstr.split()
    res = res+lis
res = list(set(res))
res.sort()
print len(res)
for i in res:
    print i
