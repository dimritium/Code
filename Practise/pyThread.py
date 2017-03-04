import threading,random
def splitter(words):
	mylist=words.split()
	newList=[]
	while (mylist):
		newList.append(mylist.pop(random.randrange(0,len(mylist))))
		print (' '.join(newList))

if __name__=='__main__':
	sentence="I am asd";
	numberOfThreads=5
	threadList=[]

	print ("Starting...\n")
	for i in range(numberOfThreads):
		t=threading.Thread(target=Splitter,args=(sentence,))
		t.start()
		threadList.append(t)
	print ("\nThread count:"+str(threading.activeCount()))
	print ("Exiting")