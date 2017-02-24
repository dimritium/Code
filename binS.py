def bins(li,start,end,key):
	mid=(start+end)/2
	if li[mid]==key:
		return mid+1
	else:
		while li[mid]!=key:
			if(li[mid]<key):
				start=mid+1
			else:
				end=mid-1
			mid=(start+end)/2
	return mid+1
 
n=int(raw_input())
li=map(int,list(raw_input().split(" ")))
li.sort()
start,end=0,n
x=long(raw_input())
print bins(li,start,end,x)
print "Sorted array:"
print li