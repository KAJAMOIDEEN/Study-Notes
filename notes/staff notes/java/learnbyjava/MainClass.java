class Point 
{
  public int x;

  public int y;
}

public class MainClass
 {
  public static void increment(int x) 
  {
    x++;
  System.out.println(x);
  }

  public static void reset(Point point)
 {
    point.x = 0;
    point.y = 0;
  }

  public static void main(String[] args) 
{
    int a = 9;
    increment(a);
    System.out.println(a); // prints 9
    Point p = new Point();
    p.x = 400;
    p.y = 600;
    reset(p);
    System.out.println(p.x); // prints 0
  }
}
