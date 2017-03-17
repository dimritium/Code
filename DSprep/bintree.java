class Node{
	int key;
	Node left, right;
	public Node(int item)
	{
		key = item;
		left = right = null;
	}
}

class bintree{
	Node root;
	bintree(int key)
	{
		root = new Node(key);
	}
	bintree()
	{
		root =null;
	}
	public static void main(String args[])
	{
		bintree tree = new bintree();
		tree.root = new Node(1);
		tree.root.left = new Node(2);
		tree.root.right = new Node(3);
		tree.root.left.left = new Node(4);
	}
}

class Node{
	int key;
	Node left, right;
	public Node(int item)
	{
		key = item;
		left = right =null;
	}
}

class bintree{
	Node root;
	bintree(int key){
		root = new Node(key);
	}
	bintree(){
		root = null;
	}
	public static void main(String[] args){
		bintree tree = new bintree();
		tree.root = new Node(1);
		tree.root.left = new Node(2);
		tree.root.right = new Node(3);
	}
}
