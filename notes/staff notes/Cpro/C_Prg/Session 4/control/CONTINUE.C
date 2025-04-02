/*CONTINUE
  ~~~~~~~~
       Continue  will cause the loop to procced with the next iteration
by skipping the rest of the loop statement.

syntax:
~~~~~~~
   while(cond 1)
   {
   statements;
   if(cond 2)
   {
   continue;
   }
   }
*/
#include<stdio.h>
#include<conio.h>
main()
{
 int i,sum=0,n;
 clrscr();
 i=1;
 while(i<=5)
 {
 printf("Enter number is(%d)",i);
 scanf("%d",&n);
 if(n<0)
 {
 printf("Don't enter negative number,re");
 continue;
 }
 i++;
 sum=sum+n;
 }
 printf("The sum is %d\n",sum);
 getch();
 }