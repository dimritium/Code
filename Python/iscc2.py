t = int(input())
for i in range(t):
    x = 1; y =2
    m = int(input())
    x = x*(m//3)
    y = y*(m//3)
    if m%3 == 1:
        x = x+1
    elif m%3 == 2:
        x,y = x+1,y+1
    print (x,y)