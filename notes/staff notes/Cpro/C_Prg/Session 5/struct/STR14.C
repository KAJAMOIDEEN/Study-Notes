#include<stdio.h>
#include<conio.h>
struct stud
{
int rn,yoj;
char name[20],dept[5];
};
main()
{
struct stud a[5];
int i,j,rollno,year;
clrscr();
printf("student details\n");
for(i=0;i<2;i++)
{
printf("enter the rollno\n");
scanf("%d",&a[i].rn);
printf("enter the name\n");
scanf("%s",&a[i].name);
printf("enter the dept\n");
scanf("%s",&a[i].dept);
printf("enter the year\n");
scanf("%d",&a[i].yoj);
}
clrscr();
printf("Enter the roll no");
scanf("%d",&rollno);
for(i=0;i<2;i++)
{
if(a[i].rn==rollno)
{
printf("NAME           :%s\n",a[i].name);
printf("DEPARTMENT     :%s\n",a[i].dept);
printf("YEAR OF JOINING:%d\n",a[i].yoj);
break;
}
}
printf("enter the year\n");
scanf("%d",&year);
clrscr();
printf("students joined during the year %d\n",year);
for(i=0;i<2;i++)
{
if(a[i].yoj==year)
{
printf("\n%s",a[i].name);
}
}
getch();
}
