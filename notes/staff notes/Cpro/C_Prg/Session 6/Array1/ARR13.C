#include<stdio.h>
#include<conio.h>
main()
{
int a[5],t,i,l,n;
clrscr();
printf("enter 5 elements\n");
for(i=0;i<5;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter the item to be deleted:");
scanf("%d",&t);
printf("aftre deletion\n");
for(i=0;i<5;i++)
{
if(a[i]==t)
{
}
else
{
printf("a[%d]=%d\n",i,a[i]);
}
}
getch();
}

