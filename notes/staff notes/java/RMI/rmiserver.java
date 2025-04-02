// Program for rmi server 


import java.rmi.*;
import java.rmi.server.*;

public class rmiserver extends UnicastRemoteObject implements RMIInt
{
	public rmiserver() throws Exception	
	{ }
	public int add(int a,int b) throws RemoteException
	{
		int res = a+b;
		return(res);
	}
	public static void main(String a[])throws Exception
	{
		rmiserver sr = new rmiserver();	
		System.out.println("Registry Started");
		Naming.rebind("First",sr);
		System.out.println("Object Bind");
	}
}