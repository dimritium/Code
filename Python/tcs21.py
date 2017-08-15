t = str(raw_input())
h,m = map(int,t.split(':'))
h = int(h)
m = int(m)
i_time = h*60 + m
total_time = 24*60 - i_time
total = (i_time//60+1)*60 - i_time + 5*(i_time//60 - 1) + 2
print total

sec_level = i_time + total
total = (sec_level//120 + 1)*120 - sec_level + 5*(sec_level//120 - 1) + 2 + total
total += 90
# print total
sec_level_r = total + sec_level

total = (sec_level_r//120 + 1)*120 - sec_level_r + 5*(sec_level_r//120 - 1) + 2 + total
f_level_r = sec_level_r + total
total = (f_level_r//60 + 1)*60 - f_level_r + 5*(f_level_r//60 - 1) + 2 + total
print total