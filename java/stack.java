class stack{
    static final int MAX = 1000;
    int top;
    int a[] = new int[MAX];
    boolean isEmpty(){
        return top<0;
    }
    stack(){
        top = -1;
    }
    boolean push(int x){
        if(top>MAX){
            System.out.println("Stack full");
            return false;
        }
        else{
            a[++top] = x;
            return true;
        }
    }
    int pop(){
        if(top<0){
            System.out.println("Stack underflow");
            return 0;
        }
        int x = a[top--];
        return x;
    }
    public static void main(String[] args) {
        stack s = new stack();
        s.push(10);
        s.push(20);
        System.out.println(s.pop());
    }
}