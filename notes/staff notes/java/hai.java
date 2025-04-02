//throw & throws
public class Hai extends Exception
{
         public Hai();
         public Hai(String str)
         {
            super(str);
          }
public static void main(String ar[])
  {
        try{
               throw new Hai("args length"+ar.length);
            }
            catch(Hai h)
             {
                System.out.println("Exception is "+h);
             }
  }

}