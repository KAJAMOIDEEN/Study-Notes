//Program for switch case statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,choice;
	clrscr();
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	printf("\n\t\t1.Add:");
	printf("\n\t\t2.Sub:");
	printf("\n\t\t3.Mulit:");
	printf("\n\t\t4.Div:");
	printf("\n Enter U choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Add Value:%d",a+b);
			break;
		case 2:
			printf("\n Sub value:%d",a-b);
			break;
		case 3:
			printf("\n Multi Value:%d",a*b);
			break;
		case  4:
			printf("\n Div Value:%d",a/b);
			break;
		default:
			printf("Invalid Choice");
	}
getch();
}