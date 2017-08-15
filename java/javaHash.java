import java.io.*;
import java.util.*;

class javaHash{
    public static void main(String[] args) {
        Hashtable<String, Integer> balance = new Hashtable<String, Integer>();
        balance.put("Sam", 121);
        balance.put("sid", 111);
        Enumeration<String> names = balance.keys();
        while(names.hasMoreElements()){
            String str = names.nextElement();
            System.out.print(str+" "+balance.get(str));
        }
        HashMap<String, Integer> bal = new HashMap<String, Integer>();
        bal.put("Bill", 321);
        bal.put("Sak", 3211);
        Enumeration<String> ds = Collections.enumeration(bal.keySet());
        Iterator di = bal.entrySet().iterator();
        while(di.hasNext()){
            Map.Entry pair = (Map.Entry)di.next();
            System.out.print("das");
            System.out.print(pair.getValue());
        }
        while(ds.hasMoreElements()){
            String k = (String)ds.nextElement();
            System.out.println(k+" "+bal.get(k));
        }
    }
}