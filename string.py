#code
tc = int(input())
for i in range(tc):
    s = str(input())
    s2 = str(input())
    # print (s2[-2:]+s[:-2])
    if (s==(s2[2:]+s2[:2]) or s==(s2[-2:]+s2[:-2])):
        print (1)
    else:
        print (0)