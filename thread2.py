import thread,time

def fun(text,delay):
	count=0;
	while(count<5):
		count+=1
		time.sleep(delay)
		print text
try:
	thread.start_new_thread(fun,('\\',1,))
	thread.start_new_thread(fun,('/',2))
except Exception as err:
	print err
while 1:
	pass