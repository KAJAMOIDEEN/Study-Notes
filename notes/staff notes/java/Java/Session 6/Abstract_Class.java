//Abstract class

abstract class A
{
     int a,b;
        abstract void sum(int x,int y);
}

class Abstract_Class extends A
{
   int c;
    void sum(int x,int y)
       {
            a=x;
            b=y;
             c=a+b;
            System.out.println(c);
         }
public static void main(String s[])
{
      Abstract_Class obj=new Abstract_Class();
      obj.sum(10,20);
  }

}

