/*COPING CONTENTS FROM ONE FILE TO ANOTHER
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 FILE *f1,*f2;
 int m;
 char name[10];
 clrscr();
 f1=fopen("student.txt","w");
 printf("Enter m&name\n");
 scanf("%d",&m);
 scanf("%s",&name);
 fprintf(f1,"%d%s",m,name);
 f1=fopen("student.txt","r");
 f2=fopen("copy.txt","w");
 fprintf(f2,"%d%s",m,name);
 fcloseall();
 printf("%d%s",m,name);
 getch();
}