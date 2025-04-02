class A
{


}
class B extends A
{

}
class C
{
	public static void main(String []s)
	{
	A obj1=new A();
	B obj2=new B();
	Class obj3;
	obj3=obj1.getClass();
	System.out.println(obj3.getName());
	obj3=obj2.getClass();
	System.out.println(obj3.getName());
	obj3=obj3.getSuperclass();
	System.out.println(obj3.getName());
	}
}
	