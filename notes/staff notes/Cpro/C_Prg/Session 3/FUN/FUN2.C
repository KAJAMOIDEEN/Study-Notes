/*FUN WITH ARGS AND RTN TYPE
  ~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
char leapyr(int);
main()
{
 int y;
 char c;
 clrscr();
 printf("Enter the year \n");
 scanf("%d",&y);
 c=leapyr(y);
 printf("%c",c);
 getch();
 }
 char leapyr(int yr)
 {
 if(yr%4==0)
 return('y');
 else
 return('n');
 }
