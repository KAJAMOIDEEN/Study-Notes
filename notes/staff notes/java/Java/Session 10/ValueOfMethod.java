//value of method

class ValueOfMethod
{
	public static void main(String [] args)
	{
	   String number=args[0];
	Byte bynum=Byte.valueOf(number);
	Short shnum=Short.valueOf(number);
	Integer num=Integer.valueOf(number);
	Long lgnum=Long.valueOf(number);
	System.out.println("Output");
	System.out.println(bynum);
	System.out.println(shnum);
	System.out.println(num);
	System.out.println(lgnum);
	}
}