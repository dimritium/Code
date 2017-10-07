n = int(input())
lis = list(map(int,input().split()))
start = 0
st_el = lis[0]
for i in range(1,n):
    if st_el>lis[i]:
        start = i-1
    else:
        st_el = lis[i]

if start == 0:
    ans = 'yes'
    