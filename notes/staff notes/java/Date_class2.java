import java.util.*;

class Date_Class2
{
	public static void main(String []s)
	{
	Date ob=new Date();
	String strdate=ob.toString();
	String str=strdate.substring(11,strdate.length()-9);
	System.out.println("time="+str);
	}
}
