//multiple catch block

import java.awt.*;
class multi_catch
{
public static void main(String ar[])
{
       int a,b=10,c;

        a=Integer.parseInt(ar[0]);
        try{
                c=b/a;
              int arr[]={10};
         

                  System.out.println(c);
                 System.out.println(arr[1]);
             }
         catch(ArithmeticException e)
             {
                   System.out.println("Arithmetic Exception"+e);
               }
       catch(ArrayOutOfBoundsException e)
           {
                 System.out.println("Array Exception"+e);
            }
         catch(NumberFormatException n)
           {
                System.out.println("Number Exeption"+n);
            }
}
}