from collections import defaultdict

graph = defaultdict()
n,e = map(int,input().split())
for i in range(e):
    u,v = map(int,input().split())
    try:
        graph[u].append(v)
    except:
        graph[u] = [v]
    try:
        graph[v].append(u)
    except:
        graph[v] = [u]
q = int(input())
for i in range(q):
    u,v = map(int,input().split())
    try:
        if v in graph[u]:
            print ('YES')
        else:
            print ('NO')
    except:
        print ('NO')