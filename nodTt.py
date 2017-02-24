def nod(y1,m1,d1,y2,m2,d2):
	lol=[]
	dom=[31,28,31,30,31,30,31,31,30,31,30,31]
	nly=y1+4-(y1%4);
	if (nly)<=y2:
		while(nly<=y2):
			lol.append(nly)
			nly+=4

	for i in range(m1,)