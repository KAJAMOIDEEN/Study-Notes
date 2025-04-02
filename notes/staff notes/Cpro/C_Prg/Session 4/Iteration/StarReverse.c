#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=5;i>=0;i--)
{
for(j=i;j>=0;j--)
{
printf("*");
}
printf("\n");
}
getch();
}