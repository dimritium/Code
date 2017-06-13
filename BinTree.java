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
class BinTree{
        private Node root;
        private void traverse(Node root){
            if(root == null)
                return;
            traverse(root.left);
            System.out.println(root.data);
            traverse(root.right);

        }
        public static void main(String[] args) {
            BinTree tr = new BinTree();
            tr.root = new Node(6);
            tr.root.left = new Node(5);
            tr.root.right = new Node(7);
            tr.traverse(tr.root);
        }
    }