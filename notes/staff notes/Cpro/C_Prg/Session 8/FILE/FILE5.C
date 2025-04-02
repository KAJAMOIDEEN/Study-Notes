
#include<stdio.h>
#include<conio.h>
main()
{
 int rollno;
 char stname[20];
 FILE *fp;
 clrscr();
 fp=fopen("stud.txt","r");
 fscanf(fp,"%d%s",&rollno,&stname);
 printf("%d\n",rollno);
 printf("%s",stname);
 fclose(fp);
 getch();
}

