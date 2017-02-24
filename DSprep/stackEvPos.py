class stackEvPo:
	def __init__(self,n):
		li=[1]*n
		for i in range(n):
			li[i]=int(raw_input())
	def dis(self):
		for i in range(len(li)):
			print self.data[i]

	x=stackEvPo()