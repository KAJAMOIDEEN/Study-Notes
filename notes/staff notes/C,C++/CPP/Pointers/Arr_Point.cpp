// Arrays & Pointers
#include<iostream.h>
#include<conio.h>

void main()
{
	int a[5],*ptr,i,j;
//	ptr=&x[0];
	clrscr();
	cout<<"\nEnter 5 Values For Array Element";
	for(i=0;i<5;i++)
	{
			scanf("%d",&a[i]);
			*ptr=a[0];
	}
	cout<<"\nArray Value U Entered is ";
	for(i=0;i<5;i++)
	{
			*ptr=a[i];
			cout<<"\n"<<*ptr;

	}
	getch();
}
