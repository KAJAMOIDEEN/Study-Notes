
import java.util.*;
class StringArray
{
  public static void main(String sr[])
{
   	String [] names=new String[5];
	int count;
	Scanner s=new Scanner(System.in);
	for(count=0;count<names.length;count++)
	{
  	System.out.println("enter the 5 name");
	names[count]=new String();
	names[count]=s.nextLine();
	}
	System.out.println("display the names");
	for(count=0;count<names.length;count++)
	{
	System.out.println(names[count]);
	}
}
}
	