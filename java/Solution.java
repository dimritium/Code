import java.util.Arrays;

class Solution{

    private static void findSol(int a[], int b[], int res[]){
        int max_a = a[0];                
        
        //finding max in a[]
        for(int i = 0;i<a.length;i++){
            if(a[i]>max_a)
                max_a = a[i];
        }
        
        //finding freq of elements of b[]
        int hash_b[] = new int[max_a+1];
        
        for(int i = 0; i < b.length; i++)
            hash_b[b[i]]++;
        
        //elements hash_b[i] <= hash_b[i-1]
        for(int i = 1; i <= max_a; i++)
            hash_b[i] += hash_b[i-1];

        //storing solution in res
        for(int i = 0; i < a.length; i++)
            res[i] = hash_b[a[i]];
    }
    public static void main(String[] args) {
        int a[] = {1,2,3,4,7,9};
        int b[] = {0,1,2,1,1,4};
        int res[] = new int[a.length];
        findSol(a,b,res);
        System.out.println(Arrays.toString(res));   
    }
}