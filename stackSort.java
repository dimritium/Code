import java.util.Stack;
class stackSort{
    public void sortedInsert(Stack<Integer> s, int x){
        if(s.isEmpty() || x > s.peek()){
            s.push(x);
            return;
        }
        int temp = s.pop();
        sortedInsert(s, x);
        s.push(temp);
    }
    public void sortStack(Stack<Integer> stack){
        if(!stack.isEmpty()){
            int temp = stack.pop();
            sortStack(stack);
            sortedInsert(stack, temp);
        }
    }
    public static void main(String[] args) {
        stackSort st = new stackSort();
        Stack<Integer> s = new Stack<Integer>();
        s.push(10);
        s.push(3);
        s.push(6);
        st.sortStack(s);
        System.out.println(s);
    }
}