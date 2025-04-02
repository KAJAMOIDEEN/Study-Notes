/*STRUCTURE VARIABLE USING ARRAYS:
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
struct stud
{
 int rno;
 char name[10];
}s[5];
main()
{
 int i;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Enter rno,name\n");
  scanf("%d",&s[i].rno);
  scanf("%s",s[i].name);
 }
 for(i=0;i<3;i++)
 {
  printf("Rno=%d\n",s[i].rno);
  printf("Name=%s",s[i].name);
  printf("\n");
 }
 printf("Size=%d\n",sizeof(s));/* sizeof(s)--->int(2),char(10),s[5]--->5*10+2=60*/
 getch();
}