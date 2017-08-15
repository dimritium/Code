class LinkedList{
   protected Node head;
    protected class Node{
        int data;
        Node next;
        Node(int item){
            data = item;
            next = null; 
        }
    }
}
class LLQueue extends LinkedList{
    int size = 0;
    int capacity = 0;
    Node front, rear, curr,prev = null;
    LLQueue(int cap){
        capacity = cap;
    }
    public void enqueue(int item){
        Node new_node = new Node(item);
        if(isFull()){
            System.out.println("Queue is full");
            return;
        }

        if(isEmpty()){
            curr  = new_node;
            head = curr;
            rear = curr;
        }
        else{
            rear = new_node;
            curr.next = new_node;
            curr = curr.next;
        }
        size++;
    }
    public boolean isFull(){
        return size == capacity-1;
    }
    public int dequeue(){
        if(isEmpty()){
            System.out.println("Queue is Empty");
            return -1;
        }
        int res = head.data;
        head = head.next;
        size--;
        return res;
    }
    public boolean isEmpty(){
        return size == 0;
    }
    public static void main(String[] args) {
        LLQueue q = new LLQueue(100);
        LLQueue q2 = new LLQueue(100);
        
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);

        q2.enqueue(10);
        
        // System.out.println(q.head.data);
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q2.dequeue());
        
    }
}