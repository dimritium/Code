import java.util.*;
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
class InOWrec{
    Node root;
    void inorder(){
        if(root == null)
            return;
    }
    Stack<Node> st = new Stack<Node>();
    Node node = root;
    while(node!=null){
        st.push(node);
        node = node.left;
    }
    while(st.size()>0){
        node = st.pop();
        System.out.print(node.data+" ");
        if(node.right!=null){
            node = node.right;

            while(node!=null){
            st.push(node);
            node = node.left;
        }
    }
    }

}