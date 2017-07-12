from sys import stdin
lis = []
for line in stdin:
    for i in line:
        if i == '"'and not lis:
            print ('``',end='')
            lis.append(1)
        elif i == '"' and lis:
            print ('\'\'',end='')
            lis.pop()
        else:
            print (i,end='')
