#include<stdio.h>
#include<conio.h>
main()
{
int a[5],i,srch,loc,found=0;
clrscr();
printf("entr the array element");
for(i=0;i<5;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\n enter the element to be searched:");
scanf("%d",&srch);
for(i=0;i<5;i++)
{
if(a[i]==srch)
{
loc=i;
found=1;
}
}
clrscr();
printf("\n enter the array values are:\n");
for(i=0;i<5;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
if(found==1)
{
printf("\n\n The entered array elements %d found at %d array location",srch,loc);
}
else
{
printf("the array element not found in the list");
}
getch();
}