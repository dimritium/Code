def pow1(x,n):
	if n==0:
		return 1
	temp=pow1(x,n/2)
	print temp
	if n%2==0:
		return temp*temp
	else:
		return x*temp*temp
print pow1(3,4)

