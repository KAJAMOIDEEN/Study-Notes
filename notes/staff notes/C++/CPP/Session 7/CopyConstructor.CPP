//Program for Copy Constructor
#include<iostream.h>
#include<conio.h>
class copycons
{
	int x;

	public :
		copycons()
		{
		}

		copycons(int a)
		{
			x=a;
		}
		copycons(copycons &c)
		{
			x=c.x;
		}

		void display()
		{
			cout<<"\n X Value:"<<x;
		}
};


void main()
{
	clrscr();
	copycons cc1(100);
	copycons cc2(cc1);
	copycons cc3= cc1;
	copycons cc4;
	cc4 = cc1;
	cc1.display();
	cc2.display();
	cc3.display();
	cc4.display();
	getch();
}