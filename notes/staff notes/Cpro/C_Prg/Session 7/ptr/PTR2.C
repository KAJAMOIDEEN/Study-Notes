/*POINTER ARITHEMETIC*/

#include<stdio.h>
#include<conio.h>
main()
{
 float a,*p;
 clrscr();
 p=&a;
 a=15;
 printf("%u\n",p);
 p++;
 printf("%u\n",p);
 p-=5;
 printf("%u \n",p);
 getch();
}