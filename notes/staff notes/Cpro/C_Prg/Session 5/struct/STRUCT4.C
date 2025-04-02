/*TWO VARIABLE DECLARATION
  ~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
struct stud
{
 int rno;
 char name[10];
}s1,s2;
/* struct stud s1,s2;*/
 clrscr();
 printf("Enter first rno,name\n");
 scanf("%d",&s1.rno);
 scanf("%s",&s1.name);

 printf("enter second record\n");
 scanf("%d",&s2.rno);
 scanf("%s",&s2.name);

 printf("rno1=%d\n",s1.rno);
 printf("name1=%s\n",s1.name);

 printf("rno2=%d\n",s2.rno);
 printf("name2=%s\n",s2.name);
 getch();
}

