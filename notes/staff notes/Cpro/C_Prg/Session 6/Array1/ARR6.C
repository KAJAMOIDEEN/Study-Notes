/*ARRAY INTILATION
  ~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int i;
 char a[]={'a','e','i','o','u'};
 clrscr();
 printf("The value are\n");
 for(i=0;i<sizeof(a);i++)
 printf("a[%d]=%c\n",i,a[i]);
 getch();
}