//linkded list
import java.util.*;

class Linkedlist
{
	public static void main(String []s)
	{
	LinkedList ob=new LinkedList();
	ob.add(10);
	ob.add(20);
	ob.add(30);
	ob.add(40);
	System.out.println(ob);
	ob.addFirst(50);
	ob.addLast(70);
	System.out.println(ob);
	ob.removeFirst();
	System.out.println(ob);
	ob.removeLast();
	System.out.println(ob);
	System.out.println(ob.getFirst());
	System.out.println(ob.getLast());
}
}

	
	