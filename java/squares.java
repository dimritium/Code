import java.math.BigInteger;

// import com.sun.java_cup.internal.runtime.Scanner;
import java.util.Scanner;
class squares{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger arr[] = new BigInteger[101];
        arr[0] = BigInteger.ZERO;
        for(int i = 1; i<=100; i++){
            arr[i] =  new BigInteger(Integer.toString(i*i)).add(arr[i-1]);
        }
        int tc = sc.nextInt();
        for(int j = 0; j<tc; j++){
            int x = sc.nextInt();
            System.out.println(arr[x]);
        }
    }
}