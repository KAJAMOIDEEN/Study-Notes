class Default_Cons
{
	int a,b;
Default_Cons()
{
	a=100,b=20;
}
void swap()
{
a=a+b;
b=a-b;
a=a-b;
System.out.println("A"+a);
System.out.println("B"+b);
}
public static void main(String [] args)
{
Default_Cons ob=new Default_Cons();
ob.swap();
}
}