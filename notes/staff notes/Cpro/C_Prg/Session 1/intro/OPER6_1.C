0                                                                                                                                                                                                             /*ABSOLUTE VALUE

 If u give negative number the value will be absolutely changed in
 positive number

 If u give the positive number the value will not change to negative
 number*/

#include<stdio.h>
#include<conio.h>
main()
{
 int num,abs;
 clrscr();
 printf("Enter a signed number");
 scanf("%d",&num);
 abs=(num<0)?-num:num;
 printf("Absolute value=%d\n",abs);
 getch();
}

