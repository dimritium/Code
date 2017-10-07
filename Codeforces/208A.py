s = str(input())
s = list(s.split('WUB'))
s = list(filter(lambda x:x!='',s))
print (" ".join(s))