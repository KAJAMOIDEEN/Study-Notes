//Overloading using Binary Operator
#include<iostream.h>
#include<conio.h>
class complex
{
	float x;
	float y;

	public:
		complex()
		{
		}

		complex(float real,float img)
		{
			x=real;
			y=img;
		}

		complex operator+(complex);
		void display();
};
complex complex :: operator+(complex c)
{
	complex temp;
	temp.x = x+c.x;  // x=x+x;
	temp.y = y+c.y;
	return(temp);
}

void complex :: display()
{
	cout<<x<<" +j "<<y<<"\n";
}

void main()
{
	complex c,c1,c2;
	clrscr();
	c=complex(2.5,3.5);
	c1=complex(1.6,2.7);
	c2=c+c1;
	cout<<"\n\nC = ";
	c.display();
	cout<<"C1 = ";
	c1.display();
	cout<<"C2 = ";
	c2.display();
	getch();
}