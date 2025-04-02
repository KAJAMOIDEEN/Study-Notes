// program for class variable

class classvariable
{
	static int price=1;
	public static int getcost()
	{
	return classvariable.price;
	}

	public static void main(String ars[])
	{
	int price;

	price=classvariable.getcost();
	system.out.println(price);
	}
  
}



