def rev(s):
    if len(s)<=1:
        return s
    return rev(s[1:])+s[0]
print (rev('sasd'))

def palin(s):
    if len(s)<=1:
        return True
    if (s[0] == s[-1]):
        return palin(s[1:-1])
    else:
        return False
print (palin('mamx'))
s = 4