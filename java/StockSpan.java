import java.util.Stack;
class StockSpan{
    public Stack<Integer> countNum(Stack<Integer> s){
        Stack<Integer> res = new Stack<Integer>();
        while(!s.isEmpty()){
            Stack<Integer>ns = new Stack<Integer>();
            ns.addAll(s);
            ns.pop();
            int x = s.pop();
            System.out.println(s);
            if(!ns.isEmpty())
            popTillFind(ns, x, res);
        }
        return res;
        }
    public void popTillFind(Stack<Integer> s, int x, Stack<Integer>res){
        int count = 1;
        System.out.println(s.peek());
        while(!s.isEmpty() && s.peek() < x){
            System.out.print("hi");
            s.pop();
            count++;
        }
        res.push(count);
        System.out.println(res);
    }
    public static void main(String[] args) {
        StockSpan s = new StockSpan();
        Stack<Integer> sta = new Stack<Integer>();
        Stack<Integer> res = new Stack<Integer>();
        sta.push(100);
        sta.push(80);
        sta.push(60);
        sta.push(70);
        sta.push(60);
        sta.push(75);
        sta.push(85);
        res = s.countNum(sta);
        System.out.println(res);
}

// int x = s.pop();
// while(s.peek<x){
//     s.pop();

}

