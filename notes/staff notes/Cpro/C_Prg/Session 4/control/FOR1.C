
/*TO CREATE TABLE
  ~~ ~~~~~~ ~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int table,i,lim;
 clrscr();
 printf("enter the table no:");
 scanf("%d",&table);
 printf("Enter the limit");
 scanf("%d",&lim);
 for(i=1;i<=lim;i++)
 {
 printf("%2d*%2d=%3d\n",i,table,i*table);
 }
 getch();
}
