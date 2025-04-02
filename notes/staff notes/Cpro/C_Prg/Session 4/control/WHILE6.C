
/* Armstrong number */

#include<stdio.h>
#include<conio.h>
main()
{
 int n,r,t,sum=0;
 clrscr();
 printf("Enter a number:");
 scanf("%d",&n);
 t=n;
 while(n>0)
 {
  r=n%10;
  sum=sum+r*r*r;
  n=n/10;
 }
 if(t==sum)
 {
  printf("Given number is an Armstrong number");
 }
 else
 {
   printf("Given number is not an armstrong number");
 }
 getch();
}