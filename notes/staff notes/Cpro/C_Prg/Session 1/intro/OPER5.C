/* Increment or Decrement*/

/*(pre Increment) ++a --->Addition in same line;
  (pre decrement) --a -->subtraction in same line;
   (post Increment) a++ ---->Addition in next line;
   (post decrement) a-- -->subtraction in next line */

#include<stdio.h>
#include<conio.h>
main()
{
  int i=10;
  clrscr();
  printf("i=%d\n",i);

  printf("i++=%d\n",i++);

  printf("i=%d\n",i);

  printf("++i=%d\n",++i);

  printf("i=%d\n",i);

  printf("i--=%d\n",i--);

  printf("i=%d\n",i);

  printf("--i=%d\n",--i);

  printf("i=%d\n",i);

  getch();
}
