
#include<stdio.h>
#include<conio.h>
void odd();
void even(int);
void odd()
{
 int i;
 for(i=0;i<5;i++)
 {
 if(i%2==1)
 printf("\t%d",i);
 else
 even(i);
 }
}
void even(int x)
{
 int i;
 for(i=x;i<10;i++)
 {
  if(i%2==0)
  printf("\n%d",i);
 }
}
main()
{
clrscr();
odd();
getch();
}
