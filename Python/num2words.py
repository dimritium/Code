hrs = ['','one ','two ','three ','four ','five ','six ','seven ','eight ','nine ','ten ','eleven ','twelve ','thirteen ','fourteen ','fifteen ','sixteen ','seventeen ','eighteen ','ninteen ','twenty ']

mins = ['','ten ','twenty ','thirty ','fourty ','fifty ']

h = int(raw_input())
m = int(raw_input())
if m==0:
    print str(hrs[h])+"o' clock"
elif m<30 and m!=15:
    if m>20:
        min_p = mins[m/10]+hrs[m%10]
    elif m<=20:
        min_p = hrs[m]
    else:
        pass
    if m==1:
        print 'one minute past '+str(hrs[h])
    else:
        print min_p+'minutes past '+hrs[h]
elif m==15:
    print 'quarter past '+hrs[h]
elif m==30:
    print 'half past '+hrs[h]

elif m>30 and m!=45:
    sig = 60-m
    if sig<=20:
        min_p=hrs[sig]
    elif sig>20:
        min_p=mins[sig/10]+hrs[sig%10]
    else:
        pass
    if sig==1:
        print 'one minute to '+hrs[h+1]
    else:
        print min_p+'minutes to '+hrs[h+1]
elif m==45:
    print 'quarter to '+hrs[h+1]