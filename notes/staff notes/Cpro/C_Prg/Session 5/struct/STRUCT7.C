/*NESTED STRUCTURE(OR)STRUCTURE WITH IN STRUCTURE
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SYNTAX:
~~~~~~~
 struct st-name1
 {
 dt var1;
 dt var2;
 :
 :
 struct st-name2
 {
 dt var1;
 dt var2;
 }st-variable2;
 }st-variable1;*/

#include<stdio.h>
#include<conio.h>
struct stud
{
 int rno;
 char name[10];
 struct mark
 {
  int tot;
  float avg;
  }m;
  }s;
 main()
 {
 clrscr();
 printf("Enter rno,name,tot,avg\n");
 scanf("%d",&s.rno);
 scanf("%s",&s.name);
 scanf("%d",&s.m.tot);
 scanf("%f",&s.m.avg);

 printf("Rno=%d\n",s.rno);
 printf("Name=%s\n",s.name);
 printf("Tot=%d\n",s.m.tot);
 printf("Avg=%0.2f\n",s.m.avg);
 getch();
}
