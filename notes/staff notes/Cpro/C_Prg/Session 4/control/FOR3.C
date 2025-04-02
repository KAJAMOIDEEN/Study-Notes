/*FACTORIAL*/
#include<stdio.h>
#include<conio.h>
main()
{
 int i,f=1,n;
 clrscr();
 printf("Enter n\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 f=f*i;
 }
 printf("THE FACTORIAL VALUE IS=%d",f);
 getch();
 }