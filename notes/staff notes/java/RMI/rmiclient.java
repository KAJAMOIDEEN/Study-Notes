// Program for Client

import java.rmi.*;

public class rmiclient
{
	public static void main(String a[]) throws Exception
	{
		RMIInt r = (RMIInt)Naming.lookup("First");
		int res = r.add(30,20);
		System.out.println("The Addition value is " +res);
	}
}