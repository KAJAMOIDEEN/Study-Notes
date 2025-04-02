/*IF ELSE STATEMENT
  ~~ ~~~~ ~~~~~~~~~
  syntax:
  ~~~~~~~

  if(condition)
  {
    executable statement 1;
  }
  else
  {
    executable statement 2;
  }*/

#include<stdio.h>
#include<conio.h>
main()
{
 int number;
 clrscr();
 printf("enter the number");
 scanf("%d",&number);
 if(number>=0)
 {
   printf("positive");
 }
 else
 {
  printf("negative");
 }
 getch();
 }
