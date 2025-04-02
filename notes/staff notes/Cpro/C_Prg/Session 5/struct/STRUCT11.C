/*UNION
  ~~~~~
union structure are same.

union->It allocates the maximum size of datatype.

structure->It allocates all the datatype size.ex:int[10];char[20]*/

#include<stdio.h>
#include<conio.h>
union stud
{
 char name[20];
 int rno;
};
main()
{
 union stud s;
 clrscr();
 scanf("%s",s.name);
 printf("%s\n",s.name);
 scanf("%d",&s.rno);
 printf("%d\n",s.rno);
 printf("\n%d",sizeof(s)); /*sizeof(s)-->sizeof(char)-->20(max size)*/
 getch();
}


