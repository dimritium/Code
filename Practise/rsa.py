#RSA Algorithm
import random

class rsa:
	
	def __init__(self):
		p_upto=500
		lis_prime=[0]*p_upto
		lis_prime[0],lis_prime[1]=1,1
		self.new_lis_prime=[]
		self.p1,self.p2=0,0
		for i in range(2,int(round(pow(p_upto,0.5)))+1):
			for j in range(i*i,p_upto,i):
				lis_prime[j]=1
		for i in range(p_upto):
			if lis_prime[i]==0:
				self.new_lis_prime.append(i)
		while(self.p1==self.p2):
			self.p1=self.new_lis_prime[random.randint(0,len(self.new_lis_prime)-1)]
			self.p2=self.new_lis_prime[random.randint(0,len(self.new_lis_prime)-1)]

	def process(self):
		self.gen_keypair(self.p1,self.p2)
		print "Enter your Msg"
		s=raw_input()
		encr=self.encrypt(s)
		print "\nYour encrypted msg is"
		print "".join(map(str,encr))
		print "Your public key is ",self.pub_k[0]
		print "\nPress 1 To Deprypt current message else to exit"
		try:
			if int(raw_input())==1:
				print "\nDepcripting your message..."
				self.decrypt(encr)
			else:
				pass
		except:
			pass

	def gcd(self,fir,sec):
		if sec==0:
			return fir
		else:
			return self.gcd(sec,fir%sec)

	def mul_inv(self,e,phi):
		for d in range(2,phi):
			if (d*e)%phi==1:
				break;
		return d

	def gen_keypair(self,p,q):
		n=p*q
		phi=(p-1)*(q-1) #totient
		e=random.randrange(2,phi)
		g=self.gcd(e,phi)
		while g!=1:
			e=random.randrange(2,phi)
			g=self.gcd(e,phi)

		d=self.mul_inv(e,phi)
		self.pub_k=(e,n)
		self.priv_k=(d,n)

	def encrypt(self,msg):
		key,n=self.pub_k
		encr=[(ord(char)**key)%n for char in msg]
		return encr

	def decrypt(self,encr):
		key,n=self.priv_k
		decr=[chr((char**key%n)) for char in encr]
		fin_msg="".join(decr)
		print fin_msg+"\n"
		print 'Your private key used to decrypt is',key

if __name__=='__main__':
	f=rsa()
	f.process()
	