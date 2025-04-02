//Program for call by reference
#include<iostream.h>
#include<conio.h>
void add(int *a);
void main()
{
	int b=90;
	cout<<"\n\n\nValue of b before calling"<<b;
	add(&b);
	cout<<"\nValue of B after calling the function"<<b;
	getch();
}

void add(int *a)
{
	*a=*a+3;
	cout<<"\nValue of B inside Function is"<<*a;
}