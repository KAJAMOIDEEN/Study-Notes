//super keyword with constructors

class SuperCons
{
    protected String name;
    	public SuperCons()
	{
	System.out.println("constructor of super class");
	}
	public void display()
	{
	System.out.println(name);
	}
}
public class SubCons extends SuperCons
{
   public String name;
   	public SubCons()
	{
	super();
	super.name="aptech";
	super.display();
	System.out.println("constructor of subclass");
	}
	public static void main(String []args)
	{
	SubCons obj=new SubCons()
	}
}
	