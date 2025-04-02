//Exceptions


class ArithExcep
{
   
    public static void main(String s[])
      {
             try
	{
                     int a=10,b=0,c;
                     c=a/b;
	fun();
                    System.out.println(c);
                  }

             catch(ArithmeticException e)

	{
		System.out.println("Exception is"+e);
	}

             finally
	{
		System.out.println("Finally block");
                    }

       }
}
