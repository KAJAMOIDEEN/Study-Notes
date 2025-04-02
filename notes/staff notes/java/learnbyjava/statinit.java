

class statinit
{
	static int x=6;
	static int y;
	static
	{
		for(int count=0;count<6;count++)
		{
		y+=x;
		}
	}
	public static void main(String args[])
	{
	System.out.println("value of x"+x);
	System.out.println("value of y"+y);	
	}
}
