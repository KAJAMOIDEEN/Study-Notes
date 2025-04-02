#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=10,*ptr;
	clrscr();
	ptr=&a;
	printf("\nInital Values Are a=%d and b=%d",a,b);
	b=*ptr;

	printf("\nThe changed values are a=%d and b=%d",a,b);

	printf("\nValue of Ptr is %u",ptr);

	printf("\nValue of the address of a is %u",&a);

	printf("\nThe Value of *ptr is %d",b);

	getch();
}