#include<iostream.h>
#include<conio.h>

void main()
{
	int *a = new int(10);
	clrscr();
	cout<<endl<<"A = "<<*a;
	delete (&a);
	cout<<endl<<"A = "<<*a;
	getch();
}