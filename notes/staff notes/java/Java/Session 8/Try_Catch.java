class Try_Catch
{
	public static void main(String ar[])
	{
	try
	{
	int a=10,b=0,c;
	c=a/b;
	System.out.println("C:"+c);
	}
	catch(ArithmeticException e)
	{
	System.out.println("Exception is:"+e);
	}
	finally
	{
	System.out.println("Finally Block Was Executed");
	}
}
}
	