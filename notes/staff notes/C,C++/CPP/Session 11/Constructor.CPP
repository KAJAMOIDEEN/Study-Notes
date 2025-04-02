//Program for Constructor
#include<iostream.h>
#include<conio.h>
class A
{
	protected:
		int a;
	public:
	A()
	{
	 a=0;
	}
	A(int c)
	{
	a=c;
	}
};

class B :public A

{
	public:
		B():A()
		{
		}
		B(int c):A(c)
		{
		cout<<c;
		}
};

void main()
{
   clrscr();
   B obj(98);
   getch();
}





