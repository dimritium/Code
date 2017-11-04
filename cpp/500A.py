def printSol(dest, t):
    su = 1
    for i in dest:
        now = su + dest[su - 1]
        if now == t:
            return 'YES'
        elif now>t:
            break
        su = now
    return 'NO'

n, t = map(int,input().split())
dest = list(map(int,input().split()))
print (printSol(dest,t))
