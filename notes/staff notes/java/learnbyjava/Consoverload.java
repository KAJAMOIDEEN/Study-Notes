class Consoverload
{
	 public Consoverload()
	{ 	
	System.out.println("default");
	}
	public Consoverload(int a)
	{ 	
	System.out.println(a);
	}
}

   public static void main(String ags[])
{
Consoverload obj=new Consoverload();

Consoverload obj1=new Consoverload(34);
}
