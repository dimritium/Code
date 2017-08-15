class Node{
    int data;
    Node left,right;
    Node(int item){
        data = item;
        left = right = null;
    }
}
class WidthTree{
    Node root;
    public int height(Node node){
        if(node==null)
            return 0;
        return 1+Math.max(height(node.left),height(node.right));
    }
    public int getMaxWidth(Node node){
        int maxWid = 0;
        int height = height(root);
        for(int i = 1; i <= height; i++){
            int width = getWidth(node,i);
            if(maxWid<width)
                maxWid = width;
        }
        return maxWid;
    }
    public int getWidth(Node node, int level){
        if(node == null)
            return 0;
        if(level == 1)
            return 1;
        return getWidth(node.left,level-1) + getWidth(node.right, level-1);
    }
    public static void main(String[] args) {

        WidthTree tree = new WidthTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.right = new Node(8);
        tree.root.right.right.left = new Node(6);
        tree.root.right.right.right = new Node(7);
  
        System.out.println("Maximum width is " + tree.getMaxWidth(tree.root));
    }
}