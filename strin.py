tc = int(raw_input())
for i in range(tc):
    n = int(raw_input())
    s = str(raw_input())
    lis = [0]*26
    res_str = ''
    cur_pos = 0
    found = 0
    for i in s:
        lis[ord(i)-65] += 1
    n_lis  = lis
    for i in range(26):
        if lis[i] != 0:
            while(lis[i]>0):
                if s[cur_pos] == chr(i+65):
                    lis[i]-=1
                    cur_pos+=1
                else:
                    rem_index = s.rindex(chr(i+65))
                    res_str = s[:cur_pos]+s[rem_index]+s[cur_pos:rem_index]+s[rem_index+1:]
                    found = 1
                    break
        if found:
            break
    if not found:
        res_str = s

    cur_pos = n-1
    res2_str = ''
    found = 0
    for i in range(25,-1,-1):
        if n_lis[i]!=0:
            while(n_lis[i]>0):
                if s[cur_pos] == chr(i+65):
                    n_lis[i]-=1
                    cur_pos-=1
                else:
                    rem_index = s.index(chr(i+65))
                    res2_str = s[:rem_index]+s[rem_index+1:cur_pos+1]+s[rem_index]+s[cur_pos+1:]
                    # print "r",res2_str
                    found = 1
                    break
        if found:
            break
    # print res2_str
    if not found:
        res2_str = s
    print min(res_str,res2_str)
            
    