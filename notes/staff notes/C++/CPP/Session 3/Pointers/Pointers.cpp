// Expression Using Pointers
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,*p1,*p2,x,z;
	float y;
	a=2;
	b=7;
	clrscr();
	p1=&a;
	p2=&b;
	x=*p1* *p2-6;
	cout<<"\nThe Value of X is"<<x;
	y=(4 * - *p2)/(*p1 +10);
	cout<<"\n"<<y;
	cout<<"\nThe Address of the a is"<<p1;
	cout<<"\nThe Address of the b is "<<p2;
	getch();
}