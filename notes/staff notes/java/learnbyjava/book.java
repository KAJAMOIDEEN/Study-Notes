
//program for anonymous class

class book
{
	    public void disp()
	{
	}
	public static void main(String args[])
	{
	title objtitle=new title();
	objtitle.objbook.disp();
	}
}
class title
{
	book objbook=new book()
	{
	public void disp()
	{	
	System.out.println("Basics of java program");
	}
	};
}
