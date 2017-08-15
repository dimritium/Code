def sum_(num):
    su = 0
    while(num):
        su+=num%10
        num/=10
    return su

n = str(raw_input())
n_int = map(int,n)
sum1 = sum(n_int[:3])
sum2 = sum(n_int[3:])
diff = abs(sum1-sum2)
num1 = int(n[:3])
num2 = int(n[3:])
max_diff_allowed = 27 - sum2
if max_diff_allowed >= diff:
    num2 += 1
    while(sum_(num2)!=sum1 and not num2/1000):
        num2 += 1
    if num2/1000:
        num1+=1
        sum1 = sum_(num1)
        num2 = 1
        while(sum_(num2)!=sum1):
            num2+=1
    num2 = format(num2,'03')
else:
    num1+=1
    sum1 = sum_(num1)
    num2 = 1
    while(sum_(num2)!=sum1):
        num2+=1
    num2 = format(num2,'03')
print str(num1) + str(num2)