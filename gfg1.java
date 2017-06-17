import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    int dir_row[] = {1, 0,-1,0};
    int dir_col[] = {0,-1, 0,1};
    
    public boolean isValid(int i, int j, int m, int n){
        if((i >=0 && i < m) && (j >= 0 && j < n))
            return true;
        return false;
    }
    
    public void exitPoint(int arr[][], int row, int col){
        int dir = -1, j = 0, i = 0;
        while(isValid(i,j,row,col)){
            if(arr[i][j] == 1){
                arr[i][j] = 0;
                dir = (dir+1)%4;
                i+=dir_row[dir];
                j+=dir_col[dir];
                 }
            else if(arr[i][j] == 0 && dir == -1){
                j+=1;
            }
            else{
                i+=dir_row[dir];
                j+=dir_col[dir];
            }
        }
        if(dir>-1){
        i = i-dir_row[dir];
        j = j-dir_col[dir];
    }
    else{
        j-=1;
    }
        System.out.println(i+" "+j);
    }
	public static void main (String[] args) {
		//code
		CFG sol = new CFG();
        Scanner sc = new Scanner(System.in);
        int tc, row, col;
        String t = sc.nextLine();
        tc = Integer.parseInt(t);
        
        for(int k = 0; k<tc; k++){
            String s = sc.nextLine();
            String[] str = s.split(" ");
            row = Integer.parseInt(str[0]);
            col = Integer.parseInt(str[1]);
            int arr[][] = new int[row][col];
            String arrays = sc.nextLine();
            String[] ar = arrays.split(" ");
            int iter = 0;
            for(int i = 0; i<row; i++)
                for(int j = 0; j<col; j++){
                    arr[i][j] = Integer.parseInt(ar[iter++]);

                }
        sol.exitPoint(arr, row, col);
	}
}