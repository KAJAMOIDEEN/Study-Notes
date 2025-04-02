//Program to Using function
#include<stdio.h>
#include<conio.h>
void print();
void display();
void main()
{
	clrscr();
	printf("Main Function");
	print();
	printf("\n Back in main");
	display();
	printf("\n After calling display");
	getch();
}

void print()
{
	printf("\n\t function - print");
}
void display()
{
	printf("\n\t Function - display");
}