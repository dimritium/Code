class SpecialStack{
    private int MAX = 100;
    private int arr[] = new int[MAX];
    private int min[] = new int[MAX];
    private int top = -1;
    private int top_min = -1;
    public void push(int data){
        if(top >= MAX){
        System.out.println("Overflow");
        return;
        }
        arr[++top] = data;
        if(top_min == -1)
            pushMin(arr[top]);
        else if(min[top_min] > arr[top])
            pushMin(arr[top]);
    }
    public void pushMin(int data){
        min[++top_min] = data;
    }
    public int pop(){
        if(top==-1){
            System.out.println("Underflow");
            return -1;
        }
        if(arr[top] == min[top_min])
            pop_min();
        return arr[top--];
    }
    public void pop_min(){
        --top_min;
    }
    public boolean isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    public boolean isFull(){
        if(top == MAX-1)
            return true;
        else
            return false;
    }
    public int getMin(){
        if(top_min == -1){
            System.out.println("Stack Empty");
            return -1;
        }
        return min[top_min];
    }
    public static void main(String[] args) {
        SpecialStack s = new SpecialStack();
        s.push(5);
        s.push(10);
        s.push(20);
        s.push(63);
        s.push(6);
        s.push(70);
        s.push(90);
        s.push(8);
        s.push(3);
        System.out.println(s.getMin());
        s.pop();
        System.out.println(s.getMin());
        s.pop();
System.out.println(s.getMin());            
// System.out.println(s.getMin());    
    }
}