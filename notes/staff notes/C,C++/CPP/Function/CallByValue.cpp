// Call By value 
#include<iostream.h>
#include<conio.h>
void change(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"\nEnter Two Values";
	cin>>a>>b;
	cout<<"\nBefore Calling ";
	cout<<"\nA is "<<a<<"\nB is"<<b;
	change(a,b);
	cout<<"\nAfter Calling ";
	cout<<"\nA is"<<a<<"\nB is"<<b;
	getch();
}

void change(int a,int b)
{
	a=a+10;
	b=b+20;
	cout<<"\nAfter Changes in values";
	cout<<"\nA is"<<a;
	cout<<"\nB is"<<b;
}


