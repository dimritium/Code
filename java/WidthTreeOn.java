import java.util.Queue;
import java.util.LinkedList;
class Node{
    int data, level;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
        level = 0;
    }
}
class WidthTreeOn{
    Node root;
    public int getWidth(Node node){
        Queue<Node>queue = new LinkedList<>();
        int pre_level = 0, max_width = 0;
        node.level=1; 
        queue.add(node);
        while(!queue.isEmpty()){
            Node temp = queue.poll();
            if(pre_level!=temp.level){
               int width = queue.size()+1;
               if(width > max_width)
                  max_width = width;
                
            }
            if(temp.left!=null){
                queue.add(temp.left);
                temp.left.level = temp.level+1;
            }
            if(temp.right!=null){
                queue.add(temp.right);
               temp.right.level = temp.level+1;
            }
            pre_level = temp.level;
        }
        return max_width;
    }
    public static void main(String[] args) {
        WidthTreeOn tree = new WidthTreeOn();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.right = new Node(8);
        tree.root.right.right.left = new Node(6);
        tree.root.right.right.right = new Node(7);
        System.out.println(tree.getWidth(tree.root));
    }
}