class LinkList{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    public void push(int new_data){
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }
    public void insertAfter(Node prev_node, int new_data){
        if(prev_node == null){
         System.out.println("Cannot be null");
        }
        Node new_node = new Node(new_data);
        new_node.next = prev_node.next;
        prev_node.next = new_node;
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

    public void deleteNode(int key){
        Node temp = head, prev = null;
        if(temp!=null && temp.data == key){
            head = head.next;
            return;
        }
        while(temp!=null && temp.data != key){
            prev = temp;
            temp = temp.next;
        }
        if(temp == null){
            return;
        }
        prev.next = temp.next;
    }

public void deleteNodepos(int position){
    Node temp = head;
    int pos = 0;
    if(head == null){
        return;
    }
    if(position == 0){
        head = head.next;
        return;
    }
    for (int i = 0; temp!=null && i<position-1; i++){
        temp = temp.next;
    }
    if(temp == null || temp.next == null){
        return;
    }
    if(temp == null || temp.next == null){
        return;
    }
    Node next = temp.next.next;
    temp.next = next;
}
 public int lengthList(){
     System.out.print("in");
     Node temp = head;
     int i;
     for(i = 0; temp!=null; temp=temp.next, i++);
     return i;
 }

 public void swapNode(int x, int y){
     if(x==y){
         return;
     }
     Node prevX = null, currX = head;
     while(currX!=null && currX.data!=x){
         prevX = currX;
         currX = currX.next;
     }
     Node prevY = null, currY = head;
     while(currY!=null && currY.data!=y){
         prevY = currY;
         currY = currY.next;
     }
     if(currX == null || currY == null){
         return;
     }
     if(prevX!=null)
        prevX.next = currY;
     else
        head = currY;
    
    if(prevY!=null)
        prevY.next = currX;
    else
        head = currX;
     Node temp = currX.next;
     currX.next = currY.next;
     currY.next = temp;
 }

 public Node reverseList(Node node){
     Node prev = null;
     Node curr = node;
     Node next = null;
     while(curr.next!=null){
         next = curr.next;
         curr.next = prev;
         prev = curr;
         curr = next;
     }
     curr.next = prev;
     node = curr;
     return node;
 }
    public void printList(Node head){
        Node tnode = head;
        while(tnode!=null){
            System.out.println(tnode.data+" ");
            tnode = tnode.next;
        }
    }
    public Node mergeList(Node llist, Node rlist){
        Node head = null;
        if(rlist == null || llist == null){
            return head;
        }
        if(llist.data < rlist.data ){
            head = llist;
            llist = llist.next;
        }
        else{
            head = rlist;
            rlist = rlist.next;
        }
        Node iter = head;
        while(llist!=null && rlist !=null){
            if(llist.data < rlist.data){
             head.next = llist;
             llist = llist.next;
            }
            else{
                head.next = rlist;
                rlist = rlist.next;
            }
            head = head.next;
        }
        if(llist == null){
            while(rlist!=null){
                head.next = rlist;
                head = head.next;
                rlist = rlist.next;
            }
        }
        else if(rlist == null){
            while(llist!=null){
                head.next = llist;
                head = head.next;
                llist = llist.next;
            }
        }
        return iter;
    }
    public static void main(String[] args){
        LinkList llist = new LinkList();
        llist.append(4);
        llist.append(5);
        llist.append(6);
        llist.append(7);
        // llist.insertAfter(llist.head, 8);
        // llist.swapNode(4, 7);
        // Node rev_lis = llist.reverseList(head);
        // llist.printList(rev_lis);
        LinkList rlist = new LinkList();
        rlist.append(1);
        rlist.append(2);
        rlist.append(3);
        rlist.append(4);
        Node iter = llist.mergeList(llist.head, rlist.head);
        llist.printList(iter);
        System.out.println("Length " + llist.lengthList());
    }
}
