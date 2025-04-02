/*
While loop
~~~~~~~~~~
     The loop are executed repeatedly while the condition is true, when
     the condition becomes false the loop is terminated.

Syntax:
~~~~~~~
while(condition)
{
  loop statements;
}
*/

#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  clrscr();
  i=1;
  while(i<=10)
  {
    printf("%d\n",i);
    i++;
  }
  getch();
}


