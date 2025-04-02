
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 char y;
 clrscr();
 do
 {
 printf("Enter 2 numbers \n");
 scanf("%d%d",&a,&b);
 printf("sum=%d\n",a+b);
 printf("Do you want to continue(y/n)");
 scanf(" %c",&y);
 }
 while(y!='n');
 getch();
 }