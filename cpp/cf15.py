import re,sys
s = str(input())
for i in s:
    if i in ['H','Q','9']:
        print ('YES')
        sys.exit()
print ('NO')