import java.util.*;

class hashtable
{
	public static void main(String []s)
	{
	Hashtable ob=new Hashtable();
	ob.put("aaa",new String("Revathi"));
	ob.put("bbb",new String("Akash"));
	ob.put("cc",new String("Priya"));
	System.out.println(ob);
	Enumeration e=ob.keys();
	String str;
	if(e.hasMoreElements())
	{
	str=(String)e.nextElement();
	System.out.println(str+"\t"+ob.get(str));
	}
}
}

