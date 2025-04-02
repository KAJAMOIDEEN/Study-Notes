class Base
{
void display()
{
System.out.println("Base Class");
}
}
class Overriding extends Base
{
void display()
{
super.display();
System.out.println("Derived Class");
}
public static void main(String [] a)
{
Overriding ob=new Overriding();
ob.display();
}
}