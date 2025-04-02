/*STORAGE CLASSES
  ~~~~~~~~~~~~~~~

   # The life time of an variable will be analized by using
     the concepts "STORAGE CLASS".


Storage classes:
~~~~~~~~~~~~~~~~
  Four type of classes.They are
	    VARIABLES           KEYWORDS
	    ~~~~~~~~~           ~~~~~~~~
      1.Automatic variable       auto
      2.Static Variable          static
      3.External Variable        extern
      4.Register variable        register

Automatic variables:
~~~~~~~~~~~~~~~~~~~~
    Variables defined inside a block and are local to the block.*/

#include<stdio.h>
#include<conio.h>
main()
{
 auto int x=1;
 clrscr();
 {
  auto int y=2;
  printf("y=%d\n",y);
  {
   int z=4,y=10;
   printf("z=%d y=%d\n",z,y);
  }
  printf("y=%d",y);
 }
/* printf("\n z=%d",z);*/ /*can,t access to outside of a block*/
 printf("\n x=%d",x);
 getch();
}
