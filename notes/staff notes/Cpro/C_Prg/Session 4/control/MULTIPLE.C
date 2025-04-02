/*MULTIPLE IF STATEMENT: (else if ladder)
  ~~~~~~~~~~~~~~~~~~~~~~
 SYNTAX:
 ~~~~~~~
 if(condition)
 statement 1;
 else if(condition)
 statement 2;
 else if(condition)
 statement 3;
 else
 statement4;*/

#include<stdio.h>
#include<conio.h>
main()
{
 int mark;
 clrscr();
 printf("enter the mark\n");
 scanf("%d",&mark);
 if(mark>=80)
 {
 printf("A GRADE");
 }
 else if(mark>=60)
 {
 printf("B GRADE");
 }
 else if(mark>=40)
 {
 printf("C GRADE");
 }
 else
 {
 printf("FAIL");
 }
 getch();
}