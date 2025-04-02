// Unary Operator Overloading
#include<iostream.h>
#include<conio.h>
class space
{
	int x,y,z;


	public:
		void getdata(int a,int b,int c);
		void display();
		void operator-();
};

void space :: getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}

void space :: display()
{
	cout<<endl<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
}

void space :: operator-()
{
x=-x;
y=-y;
z=-z;
}

void main()
{
	space s;
	clrscr();

	s.getdata(10,-20,30);
	cout<<"\n\nS : ";
	s.display();

	-s;
	cout<<"-S value is "<<endl;
	s.display();
	getch();
}