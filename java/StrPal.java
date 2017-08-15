import java.io.*;
import java.util.*;
import java.math.*;
class StrPal{
    public static void main(String[] args)throws IOException {
        Scanner sc = new Scanner(System.in);
        String inp;
        int tc = sc.nextInt();
        while(tc!=0){
            tc-=1;
        inp = sc.next();
        char[] inp_arr = inp.toCharArray();
        int max_pal = inp_arr.length;
        int cur_pal = 0, pal_first_index = 0;
            
            for(int i = 0; i<inp_arr.length && max_pal > cur_pal; i++){
                int first = i;
                int last = inp.lastIndexOf(inp_arr[i]);
                int lastcl = last;
                while(first!=last){
                    for(;first<last && inp_arr[first] == inp_arr[last];first++,last--);
                    
                    if(first-last == 1 || last==first){
                       if(cur_pal<(lastcl-i+1))
                            pal_first_index = i;
                        cur_pal = Math.max(cur_pal,(lastcl-i+1));

                    }
                    try{
                        last = inp.substring(i,lastcl).lastIndexOf(inp_arr[i])+i;
                        lastcl = last;
                        first = i;
                    }
                    catch(Exception StringIndexOutOfBoundsException){
                        break;
                    }
                }
                    max_pal = max_pal-1;                                
            }
                if(cur_pal == 0 )
                    cur_pal = 1;
                System.out.println(inp.substring(pal_first_index,pal_first_index+cur_pal));
        }
    }
}
