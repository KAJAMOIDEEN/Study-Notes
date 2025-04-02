import java.util.*;
import firm.*;

class Account
{
   public static void main(String args[])
{
      emp e=new emp();
      System.out.println("enter empid");
      Scanner s=new Scanner(System.in);
      e.empid=s.nextInt();
      e.display();
}
}
