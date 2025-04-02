import java.rmi.*;
import java.net.*;                                                         
public class AddServer 
{
public static void main(String arg[])
{
try
{
AddServerImpl ob=new AddServerImpl();
Naming.rebind("AddServerImpl",ob);
}
catch(Exception e)
{
System.out.println("Exception"+e);
}
}
}

