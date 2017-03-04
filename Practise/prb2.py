n,m=map(int,raw_input().split())
arr=[['']*m]*n
for i in range(n):
	s=raw_input()
	for j in range(len(s)):
		print 'i,j ',i,j
		arr[i][j]=s[j]
		# print 'arr',arr[i][j]
	print 'arr',arr
print arr