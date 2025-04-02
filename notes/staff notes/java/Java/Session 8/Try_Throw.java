//throw & throws
public class  Try_Throw extends Exception
{
         public Hai1()
{
}
         public Hai1(String str)
         {
            super(str);
          }
public static void main(String ar[])
  {
        try{
               throw new Hai1("args length"+ar.length);
            }
            catch(Hai1 h)
             {
                System.out.println("Exception is "+h);
             }
  }

}