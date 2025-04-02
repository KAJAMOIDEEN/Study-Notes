#include<stdio.h>
#include<conio.h>
int mod()
{
 int x=10,y=3;
 return(x%y);
}
main()
{
 int t;
 clrscr();
 t=mod();
 printf("\nt=%d",t);
 printf("\nmod=%d",mod());
 getch();
}
