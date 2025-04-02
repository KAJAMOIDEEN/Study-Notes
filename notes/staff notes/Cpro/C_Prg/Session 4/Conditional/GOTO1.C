#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	x=12;
	y=16;

	if (x==y)
	   {
	    x++;
	    printf("\n%d",x);
	   }
	else
	   {
	    goto ERROR;
	    ERROR:
		  printf("\n Fatal error existing");
	   }
	getch();
}