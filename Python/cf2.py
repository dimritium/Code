import math
n,m,a = map(int,input().split())
l_w = int(math.ceil((n*a)/(a*a)))
b_w = math.ceil(m/a)
print (l_w*b_w)