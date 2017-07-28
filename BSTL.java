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
    void traverse(Node head){
        if(head == null)
            return;
        traverse(head.left);
        System.out.println(head.data);
        traverse(head.right);
    }
    public static void main(String[] args) {
        BSTL bst = new BSTL();
        bst.root = new Node(5);
        bst.insert(bst.root, 4);
        bst.insert(bst.root, 1);
        bst.insert(bst.root, 7);
        bst.traverse(bst.root);
    }    
}