n = int(input())
n = n+1
for i in range(n):
    print ("  "*(n-i-1),end="")
    for j in range(0,i):
        print (j,end=" ")
    for k in range(0,i+1):
        if k == i:
            print (i-k,end="")
        else:
            print (i-k,end = " ")
    print ()
n = n-1
for i in range(n,-1,-1):
    print ("  "*(n-i+1),end="")
    for j in range(0,i):
        if i is 1:
            print (j,end="")
        else:
            print (j,end=" ")
    for k in range(i-2,-1,-1):
        if k is 0:
            print (k,end="")
        else:
            print (k,end=" ")
    if i is not 0:
        print ()
