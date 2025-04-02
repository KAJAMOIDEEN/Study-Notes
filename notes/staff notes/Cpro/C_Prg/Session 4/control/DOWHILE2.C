/*DO WHILE LOOP:
  ~~~~~~~~~~~~~~
SYNTAX:
*******
do
{
 statement;
 }while(condition);
*/
#include<stdio.h>
#include<conio.h>
main()
{
int a,n,b;
clrscr();
printf("enter the no of lines\n");
scanf("%d",&n);
a=0;
do
{
printf("\n");
b=1;
a++;
do
{
printf("%4d",b);
b++;
}while(b<=a);
}while(a<n);
getch();
}
