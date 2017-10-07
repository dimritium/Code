import math
p = [False]*16000000
sq = int(math.sqrt(16000000))
for i in range(2,sq+1):
    for j in range(i*i,16000000,i):
        p[j] = 1

print ('hi',p[31],p[4],p[15485863])