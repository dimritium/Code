class Queue{
    private int capacity = 100;
    private int size = 0;
    private int front = 0;
    private int rear = front-1;
    private int arr[] = new int[capacity];
    public void enqueue(int item){
        if(isFull()){
            System.out.println("Queue is full");
            return;
        }
        rear = (rear+1)%capacity;
        arr[rear] = item;
        size++;
    }
    public int dequeue(){
        if(isEmpty()){
            System.out.println("Queue is empty");
            return -1;
        }
        int res = arr[front];
        front = (front+1)%capacity;
        size--;
        return res;
    }
    public boolean isEmpty(){
        return size == 0; 
    }
    public boolean isFull(){
        return size == capacity;
    }
    public static void main(String[] args) {
        Queue q = new Queue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        
    }
}