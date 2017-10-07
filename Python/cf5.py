import re
s = str(input())
vowels = re.compile(r'[aAeEiIoOuUyY]')
s = re.sub(vowels,'',s)
s = s.lower()
res = ''
for i in range(0,len(s)):
    res+='.'+s[i]
print (res)