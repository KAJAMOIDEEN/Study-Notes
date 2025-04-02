/*FSCANF() AND FPRINTF():
  ~~~~~~~~~~~~~~~~~~~~~~

FSCANF():
~~~~~~~~~
  It is used read all types of data from the file.

syntax:
~~~~~~~
  fscanf(file_ptr,"format specifier",&var1,var2);

ex:
~~
 int a;
 char b;
 fscanf(fp,"%d%c",&a,&b);

fprintf():
~~~~~~~~~~
   It is used to write  all type of data into the file.

syntax:
~~~~~~~
 fprintf(file_ptr,"format specifier",var1,var2..);

ex:
~~
 int a=10;
 char b='s';
 fprintf(fp,"%d%c",a,b);*/

#include<stdio.h>
#include<conio.h>
main()
{
 int rno;
 char name[20];
 FILE *fp;
 clrscr();
 fp=fopen("stud.txt","w");
 printf("Enter the rno,name\n");
 scanf("%d",&rno);
 scanf("%s",name);
 fprintf(fp,"%d%s",rno,name);
 fclose(fp);
 getch();
}