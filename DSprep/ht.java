import java.util.*;
class ht{
    public static void main(String[] args) {
        SortedSet set = new TreeSet<>();
        set.add(12);
        set.add(11);
        set.add(5);
        int k = 2;
        String a[] = new String[set.size()];
        int count = 0;
        Iterator it = set.iterator();
        while(it.hasNext())
        {
            Object ele = it.next();
            a[count] = ele.toString();
            System.out.println(ele.toString());
            count = count + 1;
        }
        System.out.println(k+"rd smallest number is"+a[k-1]);
    }
}