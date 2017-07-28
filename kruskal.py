
class Graph:
    def __init__(self,vertices):
        self.V = vertices
        self.graph = []
    
    def addEdge(self,u,v,w):
        self.graph.append([u,v,w])

    def findparent(self,parent,i):
        if(parent[i] == i):
            return i
        return findparent(parent[i],i)

    def union(self,parent,rank,x,y):
        xroot = findparent(parent,x)
        yroot = findparent(parent,y)
        if rank[xroot]>rank[yroot]:
            parent[yroot] = xroot
        elif rank[yroot]>rank[xroot]:
            parent[xroot] = yroot
        else:
            parent[yroot] = xroot
            rank[xroot]+=1
    
    def kruskal(self):
        e = 0
        i = 0
        rank = []
        parent = []
        result = []
        cost = 0
        for node in range(self.V):
            parent.append(node)
            rank.append(0)

        self.graph = sorted(self.graph,key = lambda item: item[2])

        while e<self.V-1:
            u,v,w = self.graph[i]
            e+=1
            result.append([u,v,w])
            cost+=w
            i+=1
        return cost
g = Graph(4)
g.addEdge(0,1,0)
g.addEdge(0,2,4)
g.addEdge(0,3,1)
g.addEdge(2,3,4)
g.addEdge(1,2,2)
print(g.kruskal())
