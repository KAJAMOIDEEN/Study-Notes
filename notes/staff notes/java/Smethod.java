//static method
class Smethod
{
   private static final int inches=12;
  
   protected Smethod()
  {
   }

public static double convert(double in)
{
           return (in/inches);
}

public static void main(String a[])
{
     double inch=66;
    double feet=Smethod.convert(inch);
     System.out.println(inch+"inch is "+feet+"feet is");
}
}