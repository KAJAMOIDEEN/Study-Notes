#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();
 printf("enter a number:");
 scanf("%d",&n);
 if(n%2==0)
 {
 printf("even number");
 }
 else
 {
 printf("odd number");
 }
 getch();
}