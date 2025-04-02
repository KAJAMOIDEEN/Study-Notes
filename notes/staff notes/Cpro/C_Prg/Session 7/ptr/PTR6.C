
/*POINTER TO POINTER
  ~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a=6,*p,**ptr;
 clrscr();
 p=&a;        /*p-->address of a*/
 ptr=&p;      /*ptr-->address of p(i.e)value of p*/
 printf("a=%u\t%d\n",p,*p);
 printf("p=%u\t%x\t%5d\n",ptr,*ptr,**ptr);
 getch();
}