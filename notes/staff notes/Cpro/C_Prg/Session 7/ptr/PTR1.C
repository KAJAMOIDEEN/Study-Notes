			      /* 6.POINTERS
				 ~~~~~~~~~
Pointers:
~~~~~~~~~
    It is a variable it is mainly used to store the address
of the another variable of same data type.

syntax:
~~~~~~~
   datatype *var1,*var2;

  ex:
  ~~
  int a,*ptr;
  ptr=&a;
  unsigned integer

  ex:
  ~~
  a =>100
  &a=>20005*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a,*p;
 clrscr();
 p=&a;
 a=5;
 printf("%d\n",a);         /*a -->value*/
 printf("%x\n",p);         /*p -->address of a*/
 printf("%d\n",*p);        /*p -->address of a value*/
 printf("%u\n",&a);        /*&a -->address of a(%x-->hexadecimal value)*/
 printf("%d\n",*(&a));     /*&a --> address of a value*/

 getch();
 }


