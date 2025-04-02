//overloading different data types
public class Printing
{
	public void print(int field)
	{
	System.out.println("printing an integer value");
	}
	public void print(String filename)
	{
	System.out.println("printing an String value");
	}
	public void print(double sum)
	{
	System.out.println("printing an Double value");
	}
	public static void main(String [] args)
	{
  	Printing objprint=new Printing();
	objprint.print(101);
	objprint.print("welcome");
	objprint.print(34.56);
	}
}
