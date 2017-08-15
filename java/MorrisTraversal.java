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
class MorrisTraversal{
    Node root;
    void Mtravel(Node root){
        Node current, pre;
        if(root == null){
            return;
        }
        current = root;
        while(current!=null){

            if(current.left == null){
                
                System.out.print(current.data+" ");
                current = current.right;
            }
            else{
                pre = current.left;
                while(pre.right!=null && pre.right!=current)
                    pre = pre.right;
                if(pre.right == null){
                    pre.right = current;
                    current = current.left;
            }
            else{
                pre.right = null;
                System.out.print(current.data+" ");
                current = current.right;
              }
            }
         }
        }
        public static void main(String[] args) {
        MorrisTraversal tree = new MorrisTraversal();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
          
        tree.Mtravel(tree.root);
        }
    }
