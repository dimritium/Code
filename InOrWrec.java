import java.util.Stack;

class Node{
    int data;
    Node left;
    Node right;
    Node(int item){
        data = item;
        left = null;
        right = null;
    }
    Node(){}
}
class InOrWrec{
    Node root;
    public void InOrder(){
        if(root==null)
            return;
    Stack<Node>stack = new Stack<Node>();
    Node node = root;
    while(node!=null){
        stack.push(node);
        node = node.left;
    }
    while(stack.size()>0){
        node = stack.pop();
        System.out.print(node.data+" ");
        if(node.right!=null){
            node = node.right;
        
        while(node!=null){
            stack.push(node);
            node = node.left;
        }
      }
    }
  }
  public static void main(String[] args) {
        InOrWrec tree = new InOrWrec();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.InOrder();
    }

}