def bins(s):
	x='';nxl=''
	if s<0:
		s=-1*s
		n='0'*(32-len(bin(s)[2:]))+bin(s)[2:]
		for i in range(len(n)):
			x+=str(int(not int(n[i])))
		nx=bin((int(x,2)+1)<<1)[2:]
		if len(nx)>32:
			nx=nx[1:]
		for i in range(4):
		  	nxl+=nx[i*8:i*8+8]+' '
		x=''
		for i in range(len(nxl)):
			if nxl[i]!=' ':
				x+=str(int(not int(nxl[i])))
		x=x[2:];nxl=''
		for i in range(6):
			nxl+=x[i*5:i*5+5]+' '
		nxl=nxl.strip()
	x=''
	print nxl
	lisstr=nxl.split(' ')
	for i in range(len(lisstr)-1,-1,-1):
		if i!=0:
			x+=str(unichr((int(lisstr[i],2)|0x20)+63))
		else:
			x+=str(unichr(int(lisstr[i],2)+63))

	return x
print bins(-12645300)
