def isprime(n):
    flag = 1
    it = int(n**(.5))
    # print "it ",it
    for i in lis2:
        print "lis2 ",i
        if i<it:
            if i%n == 0:
                flag = 1
                break
        else:
            break
    return flag

lis = [0]*600000
lis[0] = lis[1] = 1
for i in range(2,int(600000**(.5))):
    for j in range(i*i, 600000, i):
        lis[j] = 1
sum_prime = 0
lis2 = []
for i in range(2,600000):
    if lis[i]==0:
        lis2.append(i)
i = 2

lis3 =[]
su = lis2[0]
print "last ",lis2[-1]
print len(lis2)
s =0
for i in range(len(lis2)):
    s = s+i
    if(s > 600000):
        print "i ",i
        break;

for i in range(1,len(lis2)):
    su = su+lis2[i]
    # if (i<10):
    #     print su
    if su < 600000 and lis[su] == 0:
        lis3.append(su)
    elif su > 600000:
        # pass
        # print "In ispr"
        if(isprime(su)):
            lis3.append(su)
        

count = 0
# del lis2[:]
# del lis[:]
# print lis3[-1]
n = int(raw_input())
for i in lis3:
    if(i<=n):
        count = count+1
print count