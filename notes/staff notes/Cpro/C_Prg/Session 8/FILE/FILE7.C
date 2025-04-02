
#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 int rno,m1,m2;
 clrscr();
 fp=fopen("disp.txt","w");
 printf("Enter rno,m1,m2\n");
 scanf("%d%d%d",&rno,&m1,&m2);
 fprintf(fp,"%d\n%d\n%d",rno,m1,m2);
 fclose(fp);
 getch();
}