import java.io.*;
import java.util.*;

class Node{
        int data;
        Node left,right;
        Node(int data){
            this.data = data;
            left = right = null;
    }
}
class BSTL{
    Node root;
    Node insert(Node head,int data){
        Node node = new Node(data);
        if(head == null){
            head = node;
            return node;
        }
        else if(head.data<data){
            head.right = insert(head.right,data);
        }
        else if(head.data>data){
            head.left = insert(head.left,data);
        }
        return head;
    }
    int traverse(Node head){
        if(head.left == null || head.right == null)
            return head.data;
        int s = traverse(head.left) + traverse(head.right);
        return s;
    }
    public static void main(String[] args) {
        BSTL bst = new BSTL();
        bst.root = new Node(5);
        bst.insert(bst.root, 4);
        bst.insert(bst.root, 1);
        System.out.println(bst.traverse(bst.root));
    }    
}