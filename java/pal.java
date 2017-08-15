import java.io.*;
import java.util.*;

class pal
{
    static int pal_no(String input)
    {
        input = input.toLowerCase();
        char[] arr = input.toCharArray();
        int freq[] = new int[26];
        for(int i = 0; i<26; i++)
            freq[i] = 0;
        for(int i = 0; i<input.length(); i++)
        {
            freq[(int)arr[i]-97]+=1;
        }
         for(int i = 0; i<26; i++)
        {
            System.out.print("i "+Integer.toString(i)+"\n");
            System.out.println(freq[i]);
        }
        return freq[0];
    }
    public static void main(String[] args) 
    {
        System.out.println(pal_no("Template"));
        System.out.println("-ve "+ Integer.toString(-1%10));
    }
}