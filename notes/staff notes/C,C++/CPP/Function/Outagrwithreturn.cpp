//Program function without arg with return type
#include<iostream.h>
#include<conio.h>
int cube();
void main()
{
	int cu;
	clrscr();
	cu=cube();
	cout<<"Cube value is"<<cu;
	getch();
}
int cube()
{
int x,y,z;
x=2;
z=x*x*x;
return z;
}