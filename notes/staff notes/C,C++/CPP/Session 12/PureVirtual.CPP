#include<iostream.h>
#include<conio.h>
//pure virtual functions
class A
{
	public :
		 virtual void show()=0;

};
class B :  public A
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
	getch();
}

