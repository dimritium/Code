tc=int(input())
for i in range(0,tc):
	x=""
	s=str(raw_input())
	len_=len(s)
	h1=s[:len_/2].strip()
	h2=s[len_/2:].strip()
	mid=''
	h1rev=h1[::-1]
	odd=len_%2
	if int(h1[-1]) > int(h2[0]):
		if(odd):
			mid=s[len_/2]
			print h1+mid+h1rev
			continue
		else:
			print h1+mid+h1rev
		else:
			z=int(h1[-1])+1
			if z!=10:
				x=h1[:-1]+str(z)
				print x+x[::-1]
				continue
			else:
				for i in range(len(h1)-1,-1,-1):
					if(h1[i]=='9' and i!=0):
						x="0"+x
					else:
						x=str(int(h1[i])+1)+x
						break;
				x=h1[:i]+x
				if i==0:
					'''if all are 9'''
					print x[:-1]+x[::-1]
					continue
				else:
					print x+x[::-1]
					continue

	else:
		if len_==1:
			print s+s
			continue
		elif int(h1[-1])>int(h2[0]):
			print h1+mid+h1rev
			continue
		else:
			z=int(mid)+1
			mid=str(z%10)
			if(z==10):
				for i in range(len(h1)-1,-1,-1):
					if(h1[i]=='9' and i!=0):
						x="0"+x
					else:
						x=str(int(h1[i])+1)+x
						break;
				x=h1[:i]+x
				if(i==0 and h1[i]=='9'):
					print x+x[::-1]
					continue
				else:
					print x+mid+x[::-1]
					continue
			else:
				print h1+mid+h1[::-1]
				continue