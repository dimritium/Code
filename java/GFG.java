import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		while(tc!=0){
            tc-=1;
		    TreeSet<Integer>ts = new TreeSet<Integer>();
		    int n = sc.nextInt();
		    int k = sc.nextInt();
		    int arr[] = new int[n];
		    for(int i = 0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    int cnt = 0;
		    while(cnt<k){
		        ts.add(arr[cnt]);
		        cnt+=1;
		    }
		    System.out.print(ts.last());
		    for(int i = 0,j = k; i<(n-k); i++,j++){
                ts.remove(arr[i]);
		        ts.add(arr[j]);
		        System.out.print(" "+ts.last());
		    }
		    System.out.println();
		}
	}
}