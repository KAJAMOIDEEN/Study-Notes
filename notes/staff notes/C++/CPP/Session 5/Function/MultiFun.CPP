#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void division(int,int);
void main()
{
	int a,b,choice;
	char ch='y';
	clrscr();
	cout<<"Enter Two Number:";
	cin>>a>>b;
	do
	{
	cout<<"\n\t\t\t1.Add";
	cout<<"\n\t\t\t2.Sub";
	cout<<"\n\t\t\t3.Mul";
	cout<<"\n\t\t\t4.Div";
	cout<<"\n\t\t\t5.Exit";
	cout<<"\nEnter U Choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			division(a,b);
			break;
		default:
			exit(0);
			break;
	}
	cout<<"\n Do U want continue(y/n):";
	cin>>ch;
}
while(ch=='y'||ch=='Y');
getch();
}
void add(int a,int b)
{
	cout<<"Add value:"<<a+b;
}
void sub(int a,int b)
{
	cout<<"Sub value:"<<a-b;
}
void mul(int a,int b)
{
	cout<<"Mul value:"<<a*b;
}
void division(int a,int b)
{
	cout<<"Division value:"<<a/b;
}


