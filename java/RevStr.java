import java.util.*;

class RevStr{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc;
        tc = sc.nextInt();
        while(tc!=0){
            String inp,resl="";
            inp = sc.next();
            String res[] = inp.trim().split("\\.");
            // System.out.println(res.toString());
            for(int i = res.length-1; i>=0; i--){
                resl+=res[i];
                if(i!=0)
                    resl+=".";
            }
            System.out.println(resl);
            tc-=1;
        }
    }
}