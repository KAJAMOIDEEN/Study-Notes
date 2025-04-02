#include<iostream.h>
#include<conio.h>

class Base
{
	public :
		int b;
		void show()
		{
			cout<<"B = "<<b<<"\n";
		}
};

class Derived : public Base
{
	public :
		int d;
		void show()
		{
			cout<<"b = "<<b<<"\n";
			cout<<"d = "<<d<<"\n";
		}
};

void main()
{
	clrscr();
	Base *ptr;
	Base bs;
	ptr = &bs;

	ptr->b = 100;
	cout<<"ptr points to base object \n";
	ptr->show();

	Derived dc;
	ptr = &dc;
	ptr->b = 200;
	cout<<"ptr now point to derived object \n";
	ptr->show();

	Derived *dtr;
	dtr = &dc;
	dtr->d = 300;
	cout<<"btr is derived type pointer \n";
	dtr->show();

	cout<<"Using ((Derived *)ptr) \n";
	((Derived *)ptr)->d = 400;
	((Derived *)ptr)->show();
	getch();
}