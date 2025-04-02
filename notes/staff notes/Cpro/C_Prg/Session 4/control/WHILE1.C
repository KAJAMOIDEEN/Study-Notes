
/* Printing 100 to 1 step"2" (100,98,96.....) */

#include<stdio.h>
#include<conio.h>
main()
{
 int i;
 clrscr();
 i=100;
 while(i>=1)
 {
   printf("%d\t",i);
   i=i-2;
 }
 getch();
}