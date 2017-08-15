import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
class Node{
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
}
class bfs{
    Node root;
    bfs(){
        root = null;
    }
    public void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            Node tempNode = q.poll();
            System.out.println(tempNode.data);
           if(tempNode.left!=null)
            q.add(tempNode.left);
            if(tempNode.right!=null)
            q.add(tempNode.right);

        }
    }
    public static void main(String[] args) {
        bfs tr = new bfs();
        tr.root = new Node(10);
        tr.root.left = new Node(14);
        tr.root.right = new Node(10);
        tr.levelOrder(tr.root);
    }
}