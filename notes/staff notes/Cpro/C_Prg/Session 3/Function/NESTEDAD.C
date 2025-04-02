#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main()
{
	int a,b,choice;
	char ch='y';
	clrscr();
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	do
	{
	printf("\n\t\t\t1.Add");
	printf("\n\t\t\t2.Sub");
	printf("\n\t\t\t3.Mul");
	printf("\n\t\t\t4.Div");
	printf("\n\t\t\t5.Exit");
	printf("\nEnter U Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
			break;
		default:
			exit();
			break;
	}
	printf("\n Do U want continue(y/n):");
	scanf("%s",&ch);
	fflush=ch;
}
while(ch=='y'||ch=='Y');
getch();
}
void add(int a,int b)
{
	printf("Add value:%d",a+b);
}
void sub(int a,int b)
{
	printf("Sub value:%d",a-b);
}
void mul(int a,int b)
{
	printf("Mul value:%d",a*b);
}
void div(int a,int b)
{
	printf("Div value:%d",a/b);
}


