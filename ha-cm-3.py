n=int(raw_input())
lis_x=[]
lis_y=[]
lis_x.append(-1)
lis_ele=map(int,raw_input().split())
for i in range(1,n):
	# currVal=lis_ele[i]
	if lis_ele[i]<lis_ele[i-1]:
		lis_x.append(lis_ele[i-1])
	else:
		lis_x.append(lis_x[-1])
# print lis_x

stack=[]
lis_fin=[-1]*n
top=0
stack.append(lis_ele[0])
for i in range(n):
	next=lis_ele[i]
	try:
		while(stack[-1]<next and len(stack)!=0):
			lis_fin[top]=next
			top=top-1
			stack.pop()
		if stack[-1]>next:
			stack.append(next)
			top+=1
	except:
		stack.append(next)

	top=i
# print lis_fin
for i in range(n):
	print lis_fin[i]+lis_x[i],