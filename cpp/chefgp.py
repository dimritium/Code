tc = int(input())
for i in range(tc):
    s = str(input())
    ka, kb = map(int,input().split())
    na, nb = 0, 0
    for i in s:
        if i == 'a':
            na += 1
        else:
            nb += 1
    res = ''
    if ka >= na and kb >= nb:
        print (s)
    elif ka >= na and kb < nb:
        # ratio = na//nb
        while(nb):
            res += 'b'*min(nb,kb)
            nb -= min(kb,nb)
            res += 'a'*min(1,na)
            na -= min(1,na)
            if na == 0 and nb > 0:
                res += '*'
                res += 'b'*min(nb,kb)
                nb -= min(nb,kb)
        if na:
            res += 'a'*na
        print (res)
    
    elif ka < na and kb >= nb:
        while (na):
            res += 'a'*min(na,ka)
            na -= min(ka,na)
            res += 'b'*min(1,nb)
            nb -= min(1,nb)
            if nb == 0 and na > 0:
                res += '*'
                res += 'a'*min(na,ka)
                na -= min(na,ka)
        if nb:
            res += 'b'*nb
        print (res)

