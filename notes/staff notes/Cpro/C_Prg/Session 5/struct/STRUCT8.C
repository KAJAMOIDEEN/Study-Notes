/*STRUCTURE USING FUNCTION POINTER
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
struct stud
{
 char *name;
 int rno;
 float avg;
};
void disp(struct stud *);
main()
{
 struct stud s={"anushya",101,76};
 clrscr();
 printf("Main:%s %d %0.2f\n",s.name,s.rno,s.avg);
 disp(&s);
 printf("Main: %s %d %0.2f\n",s.name,s.rno,s.avg);
 getch();
}
void disp(struct stud *ptr)
{
 printf("fun: %s %d %0.2f\n",ptr->name,ptr->rno,ptr->avg);
 ptr->name="Arun";
 ptr->rno=102;
 ptr->avg=89;

}

