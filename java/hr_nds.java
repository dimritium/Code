import java.io.*;
import java.util.*;

class hr_nds{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Long> lis = new ArrayList<Long>();
        int n = sc.nextInt();
        long m = sc.nextLong();
        long arr[] = new long[n];
        int i;
        for(i = 0; i<n; i++){
            arr[i] = sc.nextLong();
        }
        for(i = 0; i<n; i++){
            int flag = 0;
            for(int j = 0; j<lis.size(); j++){
                if((lis.get(j)+arr[i])%m==0){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                lis.add(arr[i]);
            }
        }
        System.out.println(lis.size());
    }
    
}