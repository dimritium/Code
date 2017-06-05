class rotLL{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    public Node rotList(Node node, int k){
        Node temp = node, head;
        int c = 0;
        while(temp.next!=null){
            temp = temp.next;
        }
        temp.next = node;
        temp = node;
        while(c<k){
            temp = temp.next;
            c++;
        }
        head = temp.next;
        temp.next = null;
        return head;
    }
    public void append(int new_data){
        Node new_node = new Node(new_data);
        if(head == null){
            head = new Node(new_data);
            return;
        }
        new_node.next = null;
        Node last = head;
        while(last.next!=null){
            last = last.next;
        }
        last.next = new_node;
        return;
    }
    public void printL(Node node){
        while(node!=null){
            System.out.print(node.data+" ");
            node = node.next;
        }
    }
    public static void main(String[] args) {
        rotLL ll1 = new rotLL();
        ll1.append(10);
        ll1.append(20);
        ll1.append(30);
        ll1.append(40);
        ll1.append(50);
        ll1.append(60);
        Node node = ll1.rotList(ll1.head, 3);
        ll1.printL(node);
    }

}