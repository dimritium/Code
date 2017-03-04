n=int(raw_input())
s=bin(n)[2:]
li=[]
count=0
s=s.split('0')
s=filter(None,s)
for i in range(len(s)):
	li.append(len(s[i]))
li.sort()
print li[-1]