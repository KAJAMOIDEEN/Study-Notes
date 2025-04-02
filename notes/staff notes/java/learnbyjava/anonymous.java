public class anonymous 
{

  public static void main(String[] args) 
{
    	Ball b = new Ball() 
	{
      	public void hit() 
    	{
        	System.out.println("You hit it!");
      	}
	 }
    	b.hit();
  
}

  interface Ball 
  {
    void hit();
  }

}
