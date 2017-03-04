n=int(raw_input())
lis_ele=map(int,raw_input().split())
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
			# print "nb for ",stack[-1],lis_ele[i]
			stack.pop()

			#stack.append(lis_ele[i])

		if stack[-1]>next:
			stack.append(next)
			top+=1
	except:
		stack.append(next)

	top=i
# while(len(stack)!=0):
# 	print "nb",stack.pop(),-1
print lis_fin