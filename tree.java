import java.util.*;
import java.util.Queue;
import java.util.LinkedList;
class tree{
    public static void main(String[] args) {
        TreeMap<Integer,Integer>ts = new TreeMap<Integer,Integer>();
        ts.put(4,5);
        ts.put(1,3);
        ts.put(1,5);
        System.out.println(ts);
        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        q.add(5);
        q.remove();
        System.out.println(q);
    }
}