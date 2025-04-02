//program for interface

interface numbers
{
     final int maxnum=3;
     public void printnums();
}

class integernum implements numbers
{
    	public void printnums()
	{
		for(int i=0;i<maxnum;i++)
		{
		System.out.println("value of number is "+i);
		}
	}
}
class floatnum implements numbers
{
 	public void printnums()
	{
		for(float i=0;i<maxnum;i++)
		{
		System.out.println("value of number is "+i);
		}	
	}
}

class dislpaynum
{
   	public static void main(String args[])
	{
	integernum obj1=new integernum();
	obj1.printnums();
	floatnum obj2=new floatnum();
	obj2.printnums();
	}
}