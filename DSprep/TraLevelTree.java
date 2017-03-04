import java.util.*;

import jdk.nashorn.internal.ir.LiteralNode.PrimitiveLiteralNode;

class Node{
    int data;
    Node left,right;
    public Node(int item){
        data = item;
        left = null;
        right = null;
    }
}

class TraLevelTree{
    Node root;
    void printLevelOrder(){
        Queue<Node> queue = new LinkedList<Node>();
        queue.add(root);
        while(!queue.isEmpty()){
            Node tempNode = queue.poll();
            System.out.println(tempNode.data + " ");
            if(tempNode.left != null){
                queue.add(tempNode.left);
            }
            if(tempNode.right!=null){
                queue.add(tempNode.right);
            }
        }
    }
   public Node search(Node root, int key){
        if(root == null || root.data == key)
        return root;
        if(root.data > key)
        return search(root.left, key);
        return search(root.right, key);
    }
 public static void main(String[] args) {
     TraLevelTree tree_level = new TraLevelTree();
     tree_level.root = new Node(8);
     tree_level.root.left = new Node(3);
     tree_level.root.right = new Node(10);
     tree_level.root.left.right = new Node(6);
     System.out.println("Level order traversal");
     tree_level.printLevelOrder();  

     Node tempNode2 = tree_level.search(tree_level.root, 2);
     if(tempNode2 != null)
     System.out.println("Key exist");
     else
     System.out.print("Doesn't exist'");    
    }
}