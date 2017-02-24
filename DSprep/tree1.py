class node:
	def __init__(self,data):
		self.left=None
		self.right=None
		self.data=data
root=node(1)
root.left=node(2)
root.right=node(3)

def printl(root):
	if root:
		print root.data
		printl(root.left)
		printl(root.right)
printl(root)