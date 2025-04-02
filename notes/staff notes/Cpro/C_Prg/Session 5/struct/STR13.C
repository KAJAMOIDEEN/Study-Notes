#include<stdio.h>
#include<conio.h>
struct detail
{
int date,month,year;
};
struct lib
{
char title[50],lname[20],fname[20];
struct detail a;
};
main()
{
struct lib b[10];
char c[10];
int i,j;
clrscr();
printf("LIBRARY DETAILS \n");
for(i=0;i<2;i++)
{
printf("No %d\n TITLE",i+1);
scanf("%s",b[i].title);
printf("AUTHOR,S LAST NAME");
scanf("%s",b[i].lname);
printf("AUTHOR,S FIRST NAME");
scanf("%s",b[i].fname);
printf("DATE OF PUBLICATION(D,M,Y)");
scanf("%d%d%d",&b[i].a.date,&b[i].a.month,&b[i].a.year);
}
clrscr();
printf("\n Enter the author last name to get the book's detail \n");
scanf("%s",c);
for(i=0;i<2;i++)
{
if(strcmp(b[i].lname,c)==0)
{
printf("TITLE %s\n",b[i].title);
printf("AUTHOR first name %s\n",b[i].fname);
printf("DATE OF PUBLICATION(D,M,Y)%d%d%d",b[i].a.date,b[i].a.month,b[i].a.year);
break;
}
}
getch();
}
