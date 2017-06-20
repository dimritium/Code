class Node{
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
}
class ksmallest{
    Node root = null;
    static int count;
    static int res=-1;
    public int ksmall(Node node, int k){
        if(node == null)
            return -1;
        ksmall(node.left,k);
        count++;
        if(count == k){
            res =  node.data;
        }
        ksmall(node.right, k);
        return res;
    }
    public Node insert(Node node, int k){
        
        if(node == null){
           node = new Node(k);
           return node;
        }
        if(node.data < k){
            node.right = insert(node.right, k);
        }
        else if(node.data > k){
            node.left  = insert(node.left, k);
        }
        return node;   
    }
    protected void inorder(Node node){
        if(node == null)
            return;
        inorder(node.left);
        System.out.println(node.data);
        inorder(node.right);
    }
    public static void main(String[] args) {
        ksmallest tree = new ksmallest();
        tree.root = tree.insert(tree.root,20);
        tree.insert(tree.root, 8);
        tree.insert(tree.root, 22);
        tree.insert(tree.root, 4);
        tree.insert(tree.root, 12);
        tree.insert(tree.root, 10);
        tree.insert(tree.root, 14);
        // tree.inorder(tree.root);
        // printing all smallest from 1 to n
        for(int i = 1; i<=7; i++){
        System.out.println(tree.ksmall(tree.root, i));
        count = 0;
        res = -1;
        }
    }
}