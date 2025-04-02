//multiple catch block

class MultipleCatch
{
   public static void main(String h[])
      
        {
	int a,b=10,c;
       	 a=Integer.parseInt(h[0]);
               try{
                  int arr[]={10,20};
                  c=b/a;
                  b=arr[2];
                  System.out.println(c);
                  System.out.println(b);
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