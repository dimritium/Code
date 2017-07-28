import java.io.*;
import java.util.*;

class RomanToInteger{
    int cons_one = 0, cons_five=0, cons_ten=0, cons_fif=0, cons_hun=0, cons_fhun=0, cons_th=0;
    int res = 0;
    
    private int conversion(char i){
        int ret = 0;
        switch(i){
            case 'I':
                ret = 1;
                break;
            case 'V':
                ret = 5;
                break;
            case 'X':
                ret = 10;
                break;
            case 'L':
                ret = 50;
                break;
            case 'C':
                ret = 100;
                break;
            case 'D':
                ret = 500;
                break;
            case 'M':
                ret = 1000;
                break;                
        }
    return ret;
    }

    private void consSum(char i){
        switch(i){
            case 'I':
                cons_one++;
                break;
            case 'V':
                cons_fif++;
                break;
            case 'X':
                cons_ten++;
                break;
            case 'L':
                cons_fif++;
                break;
            case 'C':
                cons_hun++;
                break;
            case 'D':
                cons_fhun++;
                break;
            case 'M':
                cons_th++;
                break;
        }
    }

    private boolean validate(){
        if(cons_one<4 && cons_fif<2 && cons_ten<4 && cons_fif<2 && cons_hun<4 && cons_fhun<2 && cons_th<4)
            return true;
        return false;
    }

    public int conR(String s){
        char[] inp_arr = s.toCharArray();
        if(inp_arr.length == 1){
            return conversion(inp_arr[0]);
        }
        
        int conv1 = conversion(inp_arr[0]), i = 1;
        consSum(inp_arr[0]);

        while(i<inp_arr.length){
            consSum(inp_arr[i]);
            
            if(!validate()){
                return -1;
            }

            int conv2 = conversion(inp_arr[i]);
            if(conv2<=conv1){
                res += conv1;
            }
            else if(conv2>conv1){
                res+=(conv2-conv1);
                conv1 = res;
            }
            else{
                res+=conv2;
                conv1 = conv2;
            }
            if(i==inp_arr.length-1 && conv2<=conv1)
                 res+=conv2;
            
            System.out.println(conv1);
            i++;
        }
            
            /*
            if(conv1>last_num){
                res += (conv1-last_num);
                last_num = res;
            }
            else if(conv1<last_num && (i+1)<inp_arr.length){
                int conv2 = conversion(inp_arr[i+1]);
                if(conv2>conv1){
                    System.out.println("if"+(conv2-conv1));
                    res+=(conv2-conv1);
                    i++;
                }
            else if(conv1<last_num){
                res+=last_num+conv1;
            }
                else{
                    System.out.println("c"+conv1);
                    res+=conv1;
                    last_num = conv1;
                }
            }
           
            else if(last_num==conv1){
                System.out.println("els"+last_num+" "+conv1);
                res += last_num;
            }
             else{
                res+=conv1;
        }
            System.out.println("r"+res);
            i++;
        }
        */
    cons_one = 0; cons_fhun = 0; 
    cons_fif =0; cons_five =0;
    cons_th=0; cons_ten=0;
    cons_hun=0;
    return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        RomanToInteger obj = new RomanToInteger();
        int tc = sc.nextInt();
        while(tc!=0){
            tc-=1;
            String s = sc.next();
            System.out.println(obj.conR(s));
            obj.res = 0;
        }
    }
}