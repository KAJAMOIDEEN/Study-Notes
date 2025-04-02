//Program for function with arg without return type
#include<iostream.h>
#include<conio.h>
void add(int x,int y);
void mul(int x, int y);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter Two value:";
	cin>>a>>b;
	add(a,b);
	mul(a,b);
	getch();
}
void add(int x, int y)
{
	int z;
	z=x+y;
	cout<<"Additional value is"<<z<<endl;
}
void mul(int x, int y)
{
	int z;
	z=x*y;
	cout<<"Product  value is"<<z<<endl;
}