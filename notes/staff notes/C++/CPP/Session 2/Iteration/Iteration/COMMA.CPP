// Program for comma operator
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1,j=5;i<10;i++,j--)
	{
		cout<<"I="<<i<<endl;
		cout<<"\tJ="<<j<<endl;
	}
	getch();
}