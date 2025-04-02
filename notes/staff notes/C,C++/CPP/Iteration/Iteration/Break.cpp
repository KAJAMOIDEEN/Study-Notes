//Program for break statement
#include<iostream.h>
#include<conio.h>
void main()
{
  	   int i;
	   clrscr();
	   for(i=1;i<=10;i++)
	     {
		if(i==5)
		{
		cout<<"The Break test"<<i;
		break;
		}
	     }
getch();
}