//Program for storage class - auto
#include<stdio.h>
#include<conio.h>

void main()
{
	void count();
	clrscr();

	count();
	count();
	count();

	getch();
}

void count ()
{
	static int i=1;
	printf("\n%d",i);
	i++;
}

