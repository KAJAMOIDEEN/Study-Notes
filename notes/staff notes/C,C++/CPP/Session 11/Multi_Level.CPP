//Program for Multilevel inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	protected :
		int x;
	public :
		void get_x()
		{
			cin>>x;

		}
		void put_x()
		{
			cout<<endl<<"X = "<<x<<endl;
		}

};

class B : public A
{
	protected :
		int y;
	public :
		void get_y()
		{

			cin>>y;
		}

		void put_y()
		{

			cout<<"Y = "<<y<<endl;
		}

};

class C : public B
{
	private :
		int z;
	public :
		void get_z()
		{
			get_x();
			get_y();
			cin>>z;
		}
		void put_z()
		{
			put_x();
			put_y();
			cout<<"z = "<<z<<endl;
		}
		void mul()
		{
			cout<<endl<<"Product of x ,y and z : "<<x*y*z;
		}
};


void main()
{
	clrscr();
	C c;
	c.get_z();
	c.put_z();
	c.mul();
	getch();
}

