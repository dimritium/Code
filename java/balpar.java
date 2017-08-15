// import java.io.*;
import java.util.*;

class balpar{
    private boolean ToPush(char a){
        boolean to_push = false;
        switch(a){
            case '{':
            case '[':
            case '(':
                to_push = true;
                break;
            default:
                break;
        }
        return to_push;        
    }
    private char modify(char i){
        char ret=' ';
        switch(i){
            case ')':ret = '(';
            break;
            case '}': ret = '{';
            break;
            case ']': ret = '[';
            break;
        }
        return ret;
    }
    public boolean isBalanced(char input_chars[]){
        boolean is_bal = false;
        Stack<Character>stack = new Stack<Character>();
        for(int i = 0; i<input_chars.length;i++){
            if(ToPush(input_chars[i])){
                stack.push(input_chars[i]);
            }
            else{
                if(stack.isEmpty() || stack.peek()!=modify(input_chars[i])){
                    return false;
                }
                else{
                    stack.pop();
                }
            }
        }
        if(stack.isEmpty())
            is_bal = true;
        return is_bal;
    }
    public static void main(String[] args) {
        int tc;
        balpar obj = new balpar();
        Scanner sc = new Scanner(System.in);
        tc = sc.nextInt();
        while(tc!=0){
        String input = sc.next();
        char input_chars[] = input.toCharArray();
        if(obj.isBalanced(input_chars))
            System.out.println("balanced");
        else
            System.out.println("not balanced");
        }
    }
}