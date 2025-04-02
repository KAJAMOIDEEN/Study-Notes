   /*STRUCTURE  BEFORE IN MAIN FUNCTION:
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
struct stud
{
 int rno;
 char name [20];
 float avg;
}s;
main()
{
/* struct stud s;*/
 clrscr();
 printf("Enter rno,name,avg\n");
 scanf("%d",&s.rno);
 scanf("%s",&s.name);
 scanf("%f", &s.avg);
 printf("Rno=%d\n",s.rno);
 printf("name=%s\n",s.name);
 printf("avg=%0.2f\n",s.avg);
 printf("size(s)=%d\n",sizeof(s)); /*sizeof(s)--->int,float,char[100]--->2+4+100*/
 printf("size(stud)=%d\n",sizeof(struct stud));
 getch();
}


