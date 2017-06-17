import java.util.Queue;
import java.util.LinkedList;
class Node{
    int data, level;
    Node left, right, nextRight;
    Node(int item){
        data = item;
        left = right = nextRight = null;
    }
}
class ConNodeSaLevel{
    Node root;
    public void link(Node node){
        Queue<Node>queue = new LinkedList<>();
        Node temp = node;
        temp.level = 1;
        // Node head = node;
        queue.add(node);
        while(!queue.isEmpty()){
            Node pop_n = queue.poll();

            if(pop_n.left!=null){
                queue.add(pop_n.left);
                pop_n.left.level = 1+pop_n.level;
            }

            if(pop_n.right!=null){
                queue.add(pop_n.right);
                pop_n.right.level = 1 + pop_n.level;
            }
            
            if(!queue.isEmpty()){   //if queue is empty don't do this part
                 if(pop_n.level == queue.peek().level){
                    pop_n.nextRight = queue.peek();
                }
            }
        }
    }
    public void traverse(Node node){
        if(node == null)
            return;
        traverse(node.left);
        System.out.print(node.data+" ");
        traverse(node.right);
    }
    public static void main(String[] args) {
       ConNodeSaLevel tree = new ConNodeSaLevel();
        /* Constructed binary tree is
             10
            /  \
          8     2
         / \    / \
        3   9  7   63*/   
        tree.root = new Node(10);
        tree.root.left = new Node(8);
        tree.root.right = new Node(2);
        tree.root.right.left = new Node(7);
        tree.root.right.right = new Node(63);
        
        tree.root.left.left = new Node(3);
        tree.root.left.right = new Node(9);
        
        tree.link(tree.root);
        tree.traverse(tree.root);
        System.out.println("\n\n\n");
        try{
            System.out.println(tree.root.left.right.nextRight.data);
        }
        catch(NullPointerException E){
            System.out.println("Null");
        }
    }
}