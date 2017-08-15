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
class HeightOfTree{
    Node root;
    public int Height(Node node){
        if(node==null)
            return 0;
        else
            return 1+Math.max(Height(node.left),Height(node.right));
    }
    public static void main(String[] args) {
        HeightOfTree tree = new HeightOfTree();
  
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        System.out.println(tree.Height(tree.root));
    }
}