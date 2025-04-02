//multiple catch block

class Prema
{
   public static void main(String h[])
      
        {
	int a,b=10,c;
	//int d;
       	 a=Integer.parseInt(h[0]);
               try{
                  int arr[]={10,20};
                  c=b/a;
                  b=arr[1];
	//d=12.90;
                  System.out.println(c);
                  System.out.println(b);
//	System.out.println(d);
             }
         catch(ArithmeticException e)
             {
                   System.out.println("Arithmetic Exception"+e);
               }
         catch(ArrayIndexOutOfBoundsException e)
           {
                 System.out.println("Array Exception"+e);
            }
         catch(NumberFormatException n)
           {
                System.out.println("Number Exeption"+n);
            }
}
}