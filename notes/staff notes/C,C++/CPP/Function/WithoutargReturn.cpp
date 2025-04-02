//Program function-without arg.without return type
#include<iostream.h>
#include<conio.h>
void add();
void main()
{
	clrscr();
	add();
	cout<<"Back in main"<<endl;
	getch();
}
void add()
{
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	cout<<"Addition value is"<<c<<endl;
}
