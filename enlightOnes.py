def is_enlighten(pi,k,power):
	last_position=pi[0]+power
	k-=1
	for x in pi:
		if x>last_position+power:
			last_position=x+power
			k-=1
	return k>=0

def solve(pi,k):
	pi.sort()
	start=0
	end=(pi[0]+pi[-1])/2 +1
	found=end
	while start<=end:
		mid=(start+end)/2
		if not is_enlighten(pi,k,mid):
			start=mid+1
		else:
			found=mid
			end=mid-1
	return found


n,k=map(int,raw_input().split()) #k= no of monks
pi=list(map(int,raw_input().split()))
print solve(pi,k)