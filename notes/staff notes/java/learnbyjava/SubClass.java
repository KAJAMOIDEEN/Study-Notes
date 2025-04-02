//super keyword

class SuperClass
{
   public SuperClass()
    {
         System.out.println("SuperClass method");
    }
}

public class SubClass extends SuperClass 
{
      	public SubClass()
	{
     	super();
	System.out.println("now inside the subclass");
	}
	public static void main(String []args)
	{
	SubClass obj=new SubClass();
	}


}

