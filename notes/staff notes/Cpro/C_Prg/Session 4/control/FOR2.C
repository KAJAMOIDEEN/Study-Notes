
/*PYRAMID
  ~~~~~~~~ */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
 int i,j,n,k,s;
 char a;
 clrscr();
 printf("enter a char\n");
 a=getchar();
 s=toascii(a);
 printf("Enter the size");
 scanf("%d",&n);
 for(j=1;j<=n;j++)
 {
 for(i=1;i<=n-j;i++)
 {
 printf(" ");
 }
 for(k=1;k<=j;k++)
 {
 printf(" %c ",s);
 }
  s++;
 printf("\n");
 }
 getch();
 }

































 /*



 s-=2;
 for(j=n-1;j>0;j--)
 {
 for(i=1;i<=n-j;i++)
 {
 printf(" ");
 }
 for(k=1;k<=j;k++)
 {
 printf(" %c ",s);
 }
 s--;
 printf("\n");
 }
 getch();
 } */