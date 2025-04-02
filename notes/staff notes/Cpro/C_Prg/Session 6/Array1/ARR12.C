/*INSERTED THE ELEMENT IN THE ARRAY:
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
int a[10],t,i,m,l,n;
clrscr();
printf("Enter the no of elements:");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("enter the item to be insereted:\n");
scanf("%d",&t);
printf("enter the location\n");
scanf("%d",&l);
for(i=0;i<n;i++)
{
m=a[l+1];
a[l+1]=a[l];
a[l]=t;
a[l+2]=m;
break;
}
printf("After insertion\n");
for(i=0;i<=n;i++)
printf("a[%d]=%d\n",i,a[i]);
getch();
}

