/*REVERSE A NUMBER
  *****************/
#include<stdio.h>
#include<conio.h>
main()
{
int n,r;
clrscr();
printf("Enter a number:");
scanf("5d",&n);
while(n>0)
{
r=n%10;
printf("%d",r);
n=n/10;
}
getch();
}