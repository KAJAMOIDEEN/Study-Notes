/*STRUCTURE USING POINTER
  ~~~~~~~~~~~~~~~~~~~~~~~
  ->=member selction operator*/
#include<stdio.h>
#include<conio.h>
struct stud
{
 int rno;
 char name[20];
}s,*ptr=&s;
main()
{
 clrscr();
 printf("Enter rno,name\n");
 scanf("%d",&ptr->rno);
 scanf("%s",ptr->name);
 printf("%d\n",ptr->rno);
 puts(ptr->name);
 getch();
}



