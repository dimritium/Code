import math

n = int(raw_input())
lis = map(int, raw_input().split())
log_sum = 0
for i in lis:
    log_sum+=math.log10(i)
log_exp = (float)(log_sum/n)
new_val = int(math.ceil(math.pow(10,log_exp)))
while n*math.log10(new_val) < log_sum:
    new_val = new_val+1
print new_val

