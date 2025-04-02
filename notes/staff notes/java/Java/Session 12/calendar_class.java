import java.util.*;

class Calendar_class
{
	public static void main(String []s)
	{
	Calendar ob=Calendar.getInstance();
	System.out.println("Month="+ob.get(Calendar.MONTH));
	System.out.println("Year="+ob.get(Calendar.YEAR));
	System.out.println("Hour="+ob.get(Calendar.HOUR));
	System.out.println("Second="+ob.get(Calendar.SECOND));
	System.out.println("Minute="+ob.get(Calendar.MINUTE));
	System.out.println("Date="+ob.get(Calendar.DATE));
	Date db1=ob.getTime();
	System.out.println(db1);
	ob.add(Calendar.MINUTE,30);
	//Date db=ob.getTime();
	System.out.println(db1);
	}
}
