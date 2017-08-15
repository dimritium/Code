n = int(input())
for i in range(n):
    x = int(input())
    n = (x*63+7492)*5 - 498
    n = abs(n)
    res = n//10
    print (res%10)