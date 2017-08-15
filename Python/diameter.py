class Node:
    def __init__(self,data=None):
        self.data = data
        self.left = None
        self.right = None

class Tree:    
    def insert(self,root,s,data,i):
        node = Node(data)
       
        if root is None:
            return node
        if(s[i] == 'L'):
            root.left = self.insert(root.left,s,data,i+1) 
        elif(s[i] == 'R'):
            root.right = self.insert(root.right,s,data,i+1)
        return root

    def traverse(self,root):
        if root is None:
            return 
        self.traverse(root.left)
        print (root.data)
        self.traverse(root.right)

    def diameter(self,root):
        if root is None:
            return 0
        ldepth = self.diameter(root.left)
        rdepth = self.diameter(root.right)
        print ("depth",ldepth,rdepth)
        return max((ldepth+rdepth),max(ldepth+1,rdepth+1))
        # if ldepth > rdepth:
        #     return ldepth+1
        # else:
        #     return rdepth+1
if __name__ == '__main__':
    nodes, r = map(int,input().split())
    root = Node(r)
    tree = Tree()
    lis = []
    for i in range(nodes-1):
        s = str(input())
        data = int(input())
        lis.append([s,data])
    print (lis)
    lis = sorted(lis, key = lambda x: len(x[0]))
    print (lis)
    for i in range(len(lis)):
        tree.insert(root,s,data,-1)
        print ("--traverse--")
        tree.traverse(root)
    print ("--dia--")
    print(tree.diameter(root)+1)