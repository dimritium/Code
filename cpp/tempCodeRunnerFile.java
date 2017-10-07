import java.io.*;
import java.util.*;
class cf3{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        s1 = s1.toLowerCase();
        s2 = s2.toLowerCase();
        if(s1.compareTo(s2)<0){
            System.out.println(-1);
        }
        else if(s1.compareTo(s2)>0){
            System.out.println(1);
        }
        else{
            System.out.println(0);
        }
    }
}