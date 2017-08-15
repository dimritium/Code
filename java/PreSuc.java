class Node{
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
}
class PreSuc{
    Node root;
    private Node search(Node root, int key){
        Node curr = root;
        Node prev = null;
        while(curr.data != key && curr != null){
            prev = curr;
            if(curr.data < key)
                curr = curr.right;
            else if(curr.data > key)
                curr = curr.left;
            if(curr == null)
            System.out.println("asd");
        }
        if(curr == null){
            // System.out.println("prev");
            return prev;
        }
        else{
            // System.out.print("da");
            return curr;
        }
        }
    private int findMin(Node res){
        int minval = res.data;
        while(res.left!=null){
            minval = res.left.data;
            res = res.left;
        }
        return minval;
    }
    public void findPreSuc(Node root, int key){
        Node res_node = search(root, key);
        if(res_node.left == null){
            System.out.println("["+(res_node.data+1)+","+(key+1)+"]");
        }
        else if(res_node.left != null){
            System.out.println("Pre "+res_node.left.data);
        }
        if(res_node.right == null){
            System.out.println(res_node.data +" "+(key+1));
        }
        if(res_node.right !=null){
            System.out.println("Succ "+findMin(res_node.right));
        }
    }
    public static void main(String[] args) {
        PreSuc tree = new PreSuc();
        tree.root = new Node(20);
        tree.root.left = new Node(10);
        tree.root.right = new Node(30);
        tree.findPreSuc(tree.root, 15);
    }
    }