/*COPY THE CONTENTS FROM ONE FILE TO ANOTHER
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp1,*fp2;
 int rno;
 char name[20];
 clrscr();
 fp1=fopen("stud.txt","r");
 fp2=fopen("cop.txt","w");
 fscanf(fp1,"%d%s",&rno,name);
 fprintf(fp2,"%d%s",rno,name);
 printf("The contents are successfully copied");
 fcloseall();
 getch();
}
