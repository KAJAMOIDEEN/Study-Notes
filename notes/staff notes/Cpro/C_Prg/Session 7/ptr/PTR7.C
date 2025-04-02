/*CALL BY VALUE
  ~~~~~~~~~~~~~
       If we are calling a function by passing value then it is called as
call by value.In this type the actual arguments are not affected by the
called function.*/

#include<stdio.h>
#include<conio.h>
swap(int,int);
main()
{
 int a,b;
 clrscr();
 printf("enter the value of a&b:\n");
 scanf("%d%d",&a,&b);
 printf("Before swapping:a=%d,b=%d\n",a,b);
 swap(a,b);
 printf("main:a=%d,b=%d\n",a,b);
 getch();
}
swap(int a,int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
 printf("after swapping :a=%d,b=%d\n",a,b);
}