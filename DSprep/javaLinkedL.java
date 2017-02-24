import java.util.*;
public class javaLinkedL
{
	public static void main(String[] args)
	{
		LinkedList<String>object=new LinkedList<String>();
		object.add("A");
		object.add("B");
		object.addLast("C");
		object.addFirst("D");
		System.out.println("Linked list"+object);
		object.remove("B");
		object.removeLast();

		System.out.println("Linked list after deletion: "+object);
		boolean status = object.contains("E");
		if(status)
			System.out.println("List contains the elements 'E'");
		else
			System.out.println("List doesn't contains the element E");
		Object element=object.get(2);
		object.set(2,"Y");
		System.out.println("Linked list after change: "+object);
	}
}