class addLL{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
        Node(){

        }
    }
    public  Node addList(Node head1, Node head2){
        // System.out.println(head1.data+" "+head2.data);
        Node head3 = null;
        int sum, carry = 0;

        sum = head1.data + head2.data + carry;
        carry = sum/10;
        head3 = new Node(sum%10);
        System.out.println(head3.data);
        Node hed = head3;
        head3 = head3.next;
        head1 = head1.next;
        head2 = head2.next;

        while(head1!=null && head2!=null){
            sum = head1.data + head2.data + carry;
            // System.out.print("s"+sum);
            carry = sum/10;
            head3 = new Node(sum%10);
            head3 = head3.next;
            head1 = head1.next;
            head2 = head2.next;
        }
        if(head1 == null && head2 != null){
            while(head2!=null){
                sum = head2.data + carry;
                head3 = new Node(sum%10);
                carry = sum/10;
                head3 = head3.next;
            }
        }
        else if (head1 != null && head2 == null){
            while(head1!=null){
                sum = head1.data + carry;
                head3 = new Node(sum%10);
                carry = sum/10;
                head3 = head3.next;
            }
        }
        System.out.println(hed.next.data);
        return hed;
    }
    public void printL(Node node){
        Node tnode = node;
        while(tnode != null){
            System.out.print(tnode.data+" ");
            tnode = tnode.next;
        }
    }
    public static void main(String[] args) {
        addLL ll1 = new addLL();
        ll1.head = new Node(1);
        ll1.head.next = new Node(2);
        addLL ll2 = new addLL();
        ll2.head = new Node(3);
        ll2.head.next = new Node(4);
        Node hed = ll1.addList(ll1.head, ll2.head);
        ll1.printL(hed);
    }
}