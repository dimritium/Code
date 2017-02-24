def hcf(fir,sec):
	if sec==0:
		return fir
	else:
		return hcf(sec,fir%sec);

tc=int(raw_input())
for i in range(tc):
	freeze=0
	flag=0
	n=int(raw_input())
	lis=map(int,raw_input().split())
	lis.sort()
	fir=lis[0]
	sec=lis[1]
	if fir==sec:
		print fir
		continue
	else:
		hc=hcf(fir,sec)
		freeze=fir*(sec/hc)
	for j in range(len(lis)):
		for k in range(len(lis)):
			if j!=k:
				fir=lis[j]
				flag=0
				sec=lis[k]
				if(fir==sec):
					new_freeze=fir
					if(new_freeze<freeze):
						freeze=new_freeze
				else:
					hc=hcf(fir,sec)
					new_freeze=fir*(sec/hc)
					if(new_freeze<freeze):
						freeze=new_freeze;

	print freeze
	