
//static nested class
public class Outside 
{
  public static class Skinside 
{

	Skinside()
	{
    	System.out.println("skin class");
	}
}

  public class Inside 
  {
                Inside()
	{
	System.out.println("Inside class");
	}

  }

}

public class MainClass2 
{

  public static void main(String[] arg) 
{
    Outside.Skinside example = new Outside.Skinside();
    Outside.Inside obj=new Outside.Inside();
  }

}