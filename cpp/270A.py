def isPoly(a):
    if 360/(180-a) == 360//(180-a):
        return True
    else:
        return False
    
t = int(input())
for i in range(t):
    x = int(input())
    if isPoly(x):
        print ("YES")
    else:
        print ("NO")