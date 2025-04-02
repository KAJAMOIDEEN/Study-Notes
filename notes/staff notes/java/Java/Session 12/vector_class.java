

import java.util.*;

class vector_class
{
	public static void main(String []s)
	{
	Vector ob=new Vector();
	ob.addElement(1);
	ob.addElement(2);
	ob.addElement(3);
	ob.addElement(4);
	ob.addElement(5);
	System.out.println(ob);
	ob.insertElementAt(6,1);
	ob.insertElementAt(7,3);
	System.out.println(ob);
	String str="welcome";
	if(ob.contains(str))
	{
	System.out.println("Fount"+str+"At index"+ob.indexOf(str));
	}
	else
	System.out.println("Not Found");
	System.out.println(ob.firstElement());
	System.out.println(ob.lastElement());
	System.out.println(ob.capacity());
}
}