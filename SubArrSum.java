import java.io.*;
import java.util.*;

class SubArrSum{
    int first = 0,last = 0;
    public int findSub(int arr[],int sum){
        int start = 0;
        int cur_sum = arr[0];
        for(int i = 1; i<=arr.length; i++){
            while(cur_sum>sum && start < i-1){
                cur_sum-=arr[start];
                start++;
            }
            if(cur_sum == sum){
                first = start;last = i-1;
                return 1;
            }
            if(i<arr.length)
                cur_sum+=arr[i];
        }
        
        return 0;
    }
    public static void main(String[] args) {
        SubArrSum obj = new SubArrSum();
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc!=0){
            tc-=1;
            int n = sc.nextInt();
            int sum = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0; i<n; i++){
                arr[i] = sc.nextInt();
            }
            if(obj.findSub(arr,sum)==1){
                System.out.println((obj.first+1)+" "+(obj.last+1));
            }
            else{
                System.out.println(-1);
            }
            obj.first = 0;obj.last=0;
        }
    }
}