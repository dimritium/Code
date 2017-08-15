n,s = map(int,raw_input().split())
di = []
ti = []
for i in range(n):
    x,y = map(int,raw_input().split())
    ti.append(x)
    di.append(y)
nth_down = []
for i in range(1,n):
    nth_down.append((ti[i]-ti[i-1])*di[i-1])
nth_down.append(di[-1])
total_down = []
total_down.append(nth_down[0])
for i in range(1,n):
    total_down.append(total_down[i-1]+nth_down[i])
final_res = []
print nth_down
print total_down
for i in range(n):
    pass