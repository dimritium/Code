
class Node{
    int data;
    Node left;
    Node right;
    Node(int item){
        data = item;
        left = null;
        right = null;
    }
}
class BinTreeDia{
    Node root;
    int diameter(Node root){
        if(root == null)
            return 0;
        int lheight = height(root.left);
        int rheight = height(root.right);
        
        System.out.println("lh : "+lheight+" rh : "+rheight);
        
        int ldiameter = diameter(root.left);
        int rdiameter = diameter(root.right);

        System.out.println("ld : "+ldiameter+" rd : "+rdiameter);
        System.out.println(Math.max(lheight+rheight+1, Math.max(ldiameter,rdiameter)));
        return Math.max(lheight+rheight+1, Math.max(ldiameter,rdiameter));
    }
    int diameter(){
        return diameter(root);
    }
    static int height(Node node){
        if(node==null)
            return 0;
        return Math.max(height(node.left), height(node.right))+1;
    }
    public static void main(String[] args) {
        BinTreeDia tr = new BinTreeDia();
        tr.root = new Node(1);
        tr.root.left = new Node(2);
        tr.root.right = new Node(3);
        tr.root.left.left = new Node(4);
        tr.root.left.right = new Node(5);
 
        System.out.println("The diameter of given binary tree is : "
                           + tr.diameter());
    }
}