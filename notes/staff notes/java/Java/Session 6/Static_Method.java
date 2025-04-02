//static method
class Static_Method
{
   private static final int inches=12;
  
   protected Static_Method()       
  {
   }

public static double convert(double in)
{
           return (in/inches);
}

public static void main(String a[])
{
     double inch=66;
    double feet=Static_Method.convert(inch);
     System.out.println(inch+"inch is "+feet+"feet is");
}
}