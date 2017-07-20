import java.io.*;
import java.util.*;
import java.math.BigInteger;


public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
         int n = Integer.parseInt(br.readLine().trim());
         String[] arr_a = br.readLine().split(" ");
         int[] a = new int[n];
         for(int i_a=0; i_a<arr_a.length; i_a++)
         {
         	a[i_a] = Integer.parseInt(arr_a[i_a]);
         }

         long out_ = solve(a);
         System.out.println(out_);

         wr.close();
         br.close();
    }
    static long solve(int[] a){
        // Write your code here
    BigInteger sum =new BigInteger("0");
    BigInteger MOD = new BigInteger("10000000011");
    long k = 0;
     for(long i : a){
         k+=1;
        // System.out.println("i "+i);
        sum = sum.add(BigInteger.valueOf(bits(i,k)));
        // System.out.println(sum);
        sum = sum.mod(MOD);
     }
    return sum.longValue();
    }
    static long  bits(long i,long k){
       
        if(i == 0)
        return 0;
        long count = 1;
        while((i & (i-1))>0){
            count+=1;
            i = i & (i-1);
        }
        long res = powRes(count, k);
        return res;
    }
    static long powRes(long count, long k){
        BigInteger res = new BigInteger("1");
        BigInteger MOD = new BigInteger("10000000011");
        BigInteger cnt  = BigInteger.valueOf(count);
        cnt = cnt.mod(MOD);
        while(k>0){
            if((k & 1)==1){
                res = res.multiply(cnt);
                res = res.mod(MOD);
            }
            k = k/2;
            cnt = cnt.multiply(cnt);
            cnt = cnt.mod(MOD);
        }

        return res.longValue();
    }
}