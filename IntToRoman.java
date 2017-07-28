import java.util.*;
import java.lang.Math.*;
class IntToRoman{
    HashMap<Integer,String>hm = new HashMap<Integer,String>(){
        {
            put(1,"I");
            put(4,"IV");
            put(5,"V");
            put(9,"IX");
            put(10,"X"); put(40,"XL"); put(50,"L"); 
            put(90,"XC"); put(100,"C");
            put(400,"CD"); put(500,"D"); put(900,"CM"); put(1000,"M"); put(4000,"CM");
        };
    };
    private int countZeros(int n){
        int c = 0;
        while(n/10!=0){
            c+=1;
            n = n/10;
        }
        return c;
    }
    private String recAdd(String s,int n, int base){
        if(hm.get(n)!=null)
            return hm.get(n);
        
         return  recAdd(s,n-base,base) + hm.get(base);
        
    }
    public void conIR(int s){
        List<Integer> no_split = new ArrayList<Integer>();
        int mul = 1;
        while(s!=0){
            int no = s%10;
            no_split.add(no*mul);
            mul*=10;
            s/=10;
        }
        Collections.reverse(no_split);
        // System.out.println(no_split.toString());
        String res = "";
        for(int w:no_split){
            if(w==0)
                res+="";
            else if(hm.get(w)==null){
                String mid="";
                int zeros = countZeros(w);
                int base = (int)Math.pow(10,zeros);
                res+=recAdd(mid,w,base);
            }
            else{
                res+=hm.get(w);
            }
        }
        System.out.println(res);
    }
    public static void main(String[] args) {
        IntToRoman obj = new IntToRoman();
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        int c = 1;
        while(tc!=0){
            tc-=1;
            int n = sc.nextInt();
            obj.conIR(n);
        }
    }
}