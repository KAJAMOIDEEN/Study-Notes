//Program for Nested if Statement
#include<iostream.h>
#include<conio.h>
void main()
{
int inum;
clrscr();
cout<<"Enter A Number:";
cin>>inum;
if (inum % 3 == 0)
{
	if (inum % 5 == 0)
	{
		cout<<"The number is divisible by both 3 and 5"<<endl;
	}
	else
	{
		cout<<"The number is divisible by 3 but not by 5"<<endl;
	}
}
else
{
	cout<<"The Number is Divisible not 3 and 5"<<endl;
}
getch();
}
