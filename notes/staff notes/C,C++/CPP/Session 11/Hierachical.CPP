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
			get_x();
			cin>>y;
		}

		void put_y()
		{

			put_x();
			cout<<"Y = "<<y<<endl;
		}

};

class C : public A
{
	protected :
		int z;
	public :
		void get_z()
		{
			cin>>z;
		}

		void put_z()
		{
			cout<<"z = "<<z<<endl;
		}
};

class D : public C
{
	private :
		int a;
	public :
		void get_a()
		{
			get_x();
			get_z();
			cin>>a;
		}

		void put_a()
		{
			put_x();
			put_z();
			cout<<"a = "<<a<<endl;
		}
		void mul()
		{
			cout<<endl<<"Product of x  and z : "<<x*z*a;
		}
};



void main()
{
	clrscr();
	cout<<"Object B Class ...."<<endl;
	B b;
	b.get_y();
	b.put_y();

	cout<<"Object D Class ..."<<endl;
	D c;
	c.get_a();
	c.put_a();
	c.mul();
	getch();
}

