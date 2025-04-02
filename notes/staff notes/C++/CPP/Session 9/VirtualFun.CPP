//Program for Virtual Function
#include<iostream.h>
#include<conio.h>
class A
{
	public :
		virtual void show()
		{
			cout<<"\nI'm in Base Class Show Function";
		}

};
class B : public A
{
	public :
		void show()
		{
			cout<<"\nI'm a Derived Class Show Function";
		}
};

void main()
{
	clrscr();
	A *ptr;
	B b;
	ptr = &b;
	ptr->show();
	A a;
	a.show();
	getch();
}

