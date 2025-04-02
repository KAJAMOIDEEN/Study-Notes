/*CONVERT INT TO CHAR
  ~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int add();
char disp();
main()
{
 int a;
 char c;
 clrscr();
 a=add();
 c=disp();
 printf("\n a=%d \t c=%c",a,c);
 getch();
}
int add()
{
 float f1=2.5,f2=3.5;
 int a;
 a=f1+f2;
 return(a);
}
char disp()
{
 int a=74;
 return(toupper(a));
}