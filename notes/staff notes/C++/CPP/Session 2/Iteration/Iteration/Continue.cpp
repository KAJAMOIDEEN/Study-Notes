//Program for continue statement
#include<iostream.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=0;i<=10;i++)
     {
	if(i==5)
	{
	continue;
	}
	cout<<"The For Loop:"<<i<<endl;

     }
getch();
}