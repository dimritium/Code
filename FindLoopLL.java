class FindLoopLL{
    static Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    int detectAndRemoveLoop(Node node){
        Node slow = node, fast = node;
        while(slow != null && fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;

            if(slow == fast){
                removeLoop(slow, node);
                return 1;
            }
        }
        return 0;
    }
    void removeLoop(Node loop, Node curr){
        Node ptr1 = null, ptr2 = null;
        ptr1 = curr;
        while(1 == 1){
            ptr2 = loop;
            while(ptr2.next!=loop && ptr2.next!=curr){
                ptr2 = ptr2.next;
            }
            if(ptr2.next == ptr1){
                break;
            }
            ptr1 = ptr1.next; //if didn't break then shift to next ptr
        }
        ptr2.next = null;
    }
    
}