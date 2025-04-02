//Program for factorial 
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,num,fact=1;
	clrscr();
	cout<<"enter A number:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		cout<<"The Factorial is:"<<fact<<endl;
	}
getch();
}