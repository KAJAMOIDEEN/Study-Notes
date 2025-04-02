#include<iostream.h>
#include<conio.h>
class sup
{
	protected :
		int xx;
	public :
		void get_xx()
		{
			cin>>xx;

		}
		void put_xx()
		{
			cout<<endl<<"XX = "<<xx;
		}

};


class A : public sup
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

class B
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

class C : public A,public B
{
	private :
		int z;
	public :
		void get_z()
		{
			get_xx();
			get_x();
			get_y();
			cin>>z;
		}

		void put_z()
		{
			put_xx();
			put_x();
			put_y();
			cout<<"z = "<<z<<endl;
		}
		void mul()
		{
			cout<<endl<<"Product of xx,x ,y and z : "<<xx*x*y*z;
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
