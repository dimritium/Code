
s = input();
res = '';
s=list(s);
for i in range(len(s)):
    if(s[i]!='?'):
        res = res + s[i];
    elif (s[i] == '?' and i != len(s)-1):
        if(s[i-1] == 'a' or s[i+1] == 'a'):
            res = res + 'b';
            s[i] = 'b';
        else:
            res = res + 'a'
            s[i] = 'a'
    elif(s[i] == '?' and i == len(s)-1)
        if(s[i-1] == 'a')
            res = res + 'b'
            s[i] = 'b'
        else:
            res = res + 'a'
print res