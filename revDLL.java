import java.util.LinkedList;

class revDLL{
    static Node head;
    static class Node{
        int data;
        Node prev, next;
        Node(int d){
            data = d;
            next = prev = null;
        }
    }
    void reverse(){
        Node temp = null;
        Node curr = head;
        while(curr!=null){
            temp = curr.prev;
            curr.prev = curr.next;
            curr.next = temp;
            curr = curr.prev;
        }
        if(temp != null){
            head = temp.prev;
        }
    }
    void push(int new_data){
        Node new_node = new Node(new_data);
        new_node.next = head;
        new_node.prev = null;
        if(head!=null){
            head.prev = new_node;
        }
        head = new_node;
    }
    void printList(Node node){
        while(node!=null){
            System.out.print(node.data+" ");
            node = node.next;
        }
    }
    public static void main(String[] args) {
        revDLL list = new revDLL();
        list.push(2);
        list.push(7); 
        list.push(6); 
        list.push(3); 
        list.push(4);
        list.reverse();
        list.printList(head);          
    }
}