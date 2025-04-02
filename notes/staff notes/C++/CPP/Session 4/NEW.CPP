//Program for New & Delete
#include<iostream.h>
#include<conio.h>

void main()
{
	int *p = new int(10);

	clrscr();
	cout<<"Address = "<<p<<endl;
	cout<<"Value = "<<*p<<endl;
	delete &p;
	cout<<"\n Value:"<<*p;
	getch();
}