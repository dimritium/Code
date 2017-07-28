import java.io.*;
import java.util.*;

class RomanToInt{
    HashMap<Character,Integer> conv = new HashMap<Character,Integer>(){
        {
        put('I',1);
        put('V',5);
        put('X',10);
        put('L',50);
        put('C',100);
        put('D',500);
        put('M',1000);
        };
    };
    public int conR(String s){
        char[] inp = s.toCharArray();
        int len = inp.length;
        int sum = conv.get(inp[len-1]);
        for(int i = len-2; i>=0; i--){
            if(conv.get(inp[i])<conv.get(inp[i+1])){
                sum-=conv.get(inp[i]);
            }
            else{
                sum+=conv.get(inp[i]);
            }
        }
        return sum;
    }
    public static void main(String[] args) {
        RomanToInt obj = new RomanToInt();
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc!=0){
            tc-=1;
            String s = sc.next();
            System.out.println(obj.conR(s));
        }
    }
}