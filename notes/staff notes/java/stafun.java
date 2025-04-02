// Program for Type Modifiers - static variable & static method
class stafun
{
	void get()
         	{
	               System.out.println("I am the Ordinary Function");
                  }
  	
	static void put()
   	{
             		System.out.println("I am the Static Function");
  	}
  	
	public static void main(String af[])
         	{
                		stafun obj=new stafun();
               		obj.get();
		put();   
       	}
}