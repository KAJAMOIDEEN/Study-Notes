//Program for break statement
#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=1;i<=10;i++)
     {
	printf("\n The For Loop:%d",i);
	if(i==5)
	{
	printf("\nThe Break test");
	break;
	}

     }
getch();
}