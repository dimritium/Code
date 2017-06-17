class Node{
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
    Node(){
        left = right = null;
    }
}
class BinTreeS{
    Node root = null;
    public boolean search(Node node, int key){
        if(node == null)
            return false;
        if(node.data == key){
            return true;
        }
        if(node.data<key)
            return search(node.right, key);
        return search(node.left, key);
    }
    public Node insert(Node root, int key){
        if(root == null){
            root = new Node(key);
            return root;
        }
        if(root.data < key){
            root.right = insert(root.right, key);
        }
        else if(root.data > key){
            root.left = insert(root.left, key);
        }
        return root;
    }
    public void traverse(Node root){
        if(root == null)
            return;
        traverse(root.left);
        System.out.println(root.data);
        traverse(root.right);
    }
    public int minValue(Node node){
        int minval = root.data;
        while(node.left!=null){
            minval = node.left.data;
            node = node.left;
        }  
        return minval;
    }   
    public Node delete(Node root, int key){
        if(root == null)
            return root;
        if(root.data < key)
            root.right = delete(root.right, key);
        else if(root.data > key)
            root.left = delete(root.left, key);
        else{
            if(root.left == null)
                return root.right;
            else if(root.right == null)
                return root.left;
            root.data = minValue(root.right);
            root.right = delete(root.right, root.data);
        }
        return root;
    }
    public static void main(String[] args) {
        BinTreeS tree = new BinTreeS();
        tree.root = new Node(50); 
        // tree.insert(tree.root,50);
        tree.insert(tree.root,30);
        tree.insert(tree.root,20);
        tree.insert(tree.root,40);
        tree.insert(tree.root,70);
        tree.insert(tree.root,60);
        tree.insert(tree.root,80);
 
        // print inorder traversal of the BST
        // tree.traverse(tree.root);
        tree.delete(tree.root, 50);
        tree.traverse(tree.root);
    }
}