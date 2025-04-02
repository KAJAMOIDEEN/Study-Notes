//Program for Virtual Destructor
#include<iostream.h>
#include<conio.h>

class A
{
	public :
		virtual void show()
		{
			cout<<"\nI'm a Base Class Show Function";
		}
		virtual ~A()
		{
			cout<<"\nDestructor in Base Class";
		}
};
class B : public A
{
	public :
		void show()
		{
			cout<<"\nI'm a Derived Class Show Function";
		}
		~B()
		{
			cout<<"\nDestructor in Derived Class";
		}
};

void main()
{
	clrscr();
	A *ptr;
	B b;
	ptr = &b;
	ptr->show();
	getch();
}

