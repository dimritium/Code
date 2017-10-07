import math
l,r,x,y,k = map(int,input().split())

for i in range(x,y+1):
    if(l<=i*k and i*k<=r):
        print ("YES")
        exit(0)
print ("NO")
