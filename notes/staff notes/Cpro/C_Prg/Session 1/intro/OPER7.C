/*BITWISE OPERATOR*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("Enter the value of a&b\n");
 scanf("%d%d",&a,&b);
 printf("\n%d",a&b);
 printf("\n%d",a|b);
 printf("\n%d",a<<1);
 printf("\n%d",a>>1);
 getch();
}