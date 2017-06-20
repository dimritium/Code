

class Node{
    int data;
    Node left, right;
    Node(int data){
        this.data = data;
        left = right = null;
    }
}
class CorrectBST{
    Node root;
    Node prev, first, middle, last;
    public void trav(Node root){
        if(root == null)
            return;
        trav(root.left);
        System.out.println(root.data);
        trav(root.right);
    }
    public void correct(Node root){
        if(root == null)
            return;
        correct(root.left);
        if(prev!= null && root.data < prev.data){
            if(first == null){
                // System.out.println(root.data + " " +prev.data);
                first = prev;
                middle = root;
                // System.out.println(first.data + " " +middle.data);
            }
            else{
                System.out.println("last "+root.data);
                last = root;
            }
        }
        prev = root;
        correct(root.right);
        }
    public static void main(String[] args) {
        CorrectBST tree = new CorrectBST();
        tree.root = new Node(6);
        tree.root.left = new Node(10);
        tree.root.right = new Node(2);
        tree.root.left.left = new Node(1);
        tree.root.left.right = new Node(3);
        tree.root.right.right = new Node(12);
        tree.root.right.left = new Node(7);
    
        tree.correct(tree.root);
        if(tree.last == null){
            int temp = tree.first.data;
            tree.first.data = tree.middle.data;
            tree.middle.data = temp;
        }
        else{
            int temp = tree.first.data;
            tree.first.data = tree.last.data;
            tree.last.data = temp;
        }
        tree.trav(tree.root);
    }
}