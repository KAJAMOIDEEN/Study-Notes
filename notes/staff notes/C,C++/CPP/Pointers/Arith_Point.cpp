//Program for Using Arithmetic in Pointers
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,*s,*v,c;
	clrscr();
	cout<<"\n Enter Two Number:";
	cin>>a>>b;
	s=&a;
	v=&b;
	c=*s+*v;
	cout<<"\n Add value"<<c;
getch();
}
