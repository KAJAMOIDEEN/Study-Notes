class This_Oper
{
	int a,b;
void func(int x,int y)
{
	this.a=x;
this.b=y;
}
void display()
{
System.out.println("A"+a);
System.out.println("B"+b);
}
public static void main(String [] a)
{
This_Oper ob=new This_Oper();
ob.func(122,200);
ob.display();
}
}