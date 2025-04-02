//throw & throws
public class throw_s extends Exception
{
         public throw_s()
{

}
         public throw_s(String str)
         {
            super(str);
          }
public static void main(String ar[])
  {
        try{
               throw new throw_s("arglength"+ar.length);
            }
            catch(throw_s h)
             {
                System.out.println("Exception is "+h);
             }
  }

}