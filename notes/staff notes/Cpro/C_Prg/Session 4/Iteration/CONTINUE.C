//Program for continue statement
#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=1;i<=10;i++)
     {
	if(i==5)
	{
	continue;
	}
	printf("\nThe For Loop:%d",i);

     }
getch();
}