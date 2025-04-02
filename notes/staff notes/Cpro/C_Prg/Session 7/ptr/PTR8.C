/*CALL BY REFERENCE
  ~~~~~~~~~~~~~~~~~
     If we are calling a function by passing address of variables
the value of actual argument can be modified by the called function.*/

#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
main()
{
 int a,b;
 clrscr();
 printf("enter a&b values:\n");
 scanf("%d%d",&a,&b);
 printf("main:a=%d,b=%d\n",a,b);
 swap(&a,&b);
 printf("main:a=%d,b=%d",a,b);
 getch();
}
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
 printf("fun:a=%d b=%d\n",*a,*b);
 }