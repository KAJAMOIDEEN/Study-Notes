#include<iostream.h>
#include<conio.h>
void main()
{
	int n,res;
	int fact(int);
	clrscr();

	cout<<"Enter the numbrer:";
	cin>>n;
	cout<<"Factorial of is"<<fact(n);
	getch();
}

int fact(int z)
{
	if (z==1)          /* Exit statement */
		return(1);
	else
		return (z*fact(z-1));
}