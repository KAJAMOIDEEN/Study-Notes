//Program Function with arg with return type
#include<iostream.h>
#include<conio.h>
int cube(int);
void main()
{
	int x,cu;
	clrscr();
	cout<<"Enter a value:";
	cin<<x;
	cu=cube(x);
	cout<<"Cube value is"<<cu;
	getch();
}
int cube(int x)
{
	int z;
	z=x*x*x;
	return z;
}