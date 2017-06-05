import java.util.*;

public class linkedList{
    public static void main(String[] args) {
        LinkedList<String>ll = new LinkedList<String>();
        ll.add("Ravi");
        ll.add("ads");
        Iterator<String>itr = ll.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
}