
class passbyvalue
{
    public static void main(String ars[])
   {
              
     	int a=5;
    	System.out.println(a);
      	func(a);
	System.out.println(a);
    }

public static void  func(int a)
{
   a+=5;
System.out.println(a);
}

}