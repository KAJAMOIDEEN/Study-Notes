//Program to For Multiplication
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,num,sum=1;
	clrscr();
	cout<<"Enter A Number:";
	cin>>num;
	for(i=1;i<=20;i++)
	{
		sum=num*i;
		cout<<i<<"*"<<num<<"="<<sum<<endl;
	}
	getch();
}
