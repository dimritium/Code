s = str(input())
valid = ['1','14','144']
i = 0
l = len(s)
while(i<l):
    if(s[i] is '1'):
        if (i+1)<l and s[i+1] == '1':
            i+=1;
        elif (i+1 <l and i+2 <l) and s[i+1] == s[i+2]:
            i+=3
        elif (i+1 <l) and s[i+1] == '4':
            i+=2
        else:
            break
    else:
        break

if i == l or (i==l-1 and s[-1]=='1'):
    print ('YES')
else:
    print ('NO') 