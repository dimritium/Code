def remZ(a):
    a = list(str(a))
    a = filter(lambda x:x!='0',a)
    return int("".join(a))

a = str(input())
b = str(input())
su = int(a)+int(b)
su = remZ(su)
new_s = int(remZ(a))+int(remZ(b))
if new_s == su:
    print ("YES")
else:
    print ('NO')
