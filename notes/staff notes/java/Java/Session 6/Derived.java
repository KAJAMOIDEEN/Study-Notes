//Inheritance
class Base
{
      public int a;
       Base()
      {
         a=100;
       }
}

class Derived extends Base
{
    public int b;
     Derived()
     {
         b=200;
     }
      void add()
       {
          System.out.println("a+b="+(a+b));
       }
public static void main(String s[])
{
      Derived obj;
      obj=new Derived();
      obj.add();
}
}
   
   