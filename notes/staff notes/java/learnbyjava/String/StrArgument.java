
//passing command line arguments
class StrArgument
{
 public static void main(String args[])
{
	   if(args.length==0)
	{
	System.out.println("u have not entered any arguments");
	}
	else
	{
		for(String str:args)
		{
		System.out.println(str);
		}
	}
}
}





