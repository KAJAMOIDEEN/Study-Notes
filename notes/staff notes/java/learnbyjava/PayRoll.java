//overloading different parameter list

public class PayRoll
{
	int a,b,c,d;
	public void add(int a)
	{
	System.out.println(a);
	}
	
	public void add(int a,int b)
	{
	c=a+b;
	System.out.println(c);
	}
	
	public void add(int a,int b,int c)
	{
	d=a+b+c;
	System.out.println(d);
	}
	
	public static void main(String[] args)
	{
	PayRoll objpay=new PayRoll();
	objpay.add(10);
	objpay.add(10,4);
	objpay.add(10,4,5);
	}
}







