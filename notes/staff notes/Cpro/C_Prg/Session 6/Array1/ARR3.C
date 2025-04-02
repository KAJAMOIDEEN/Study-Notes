/*SUM OF ARRAY ELEMENT*/
/*  ~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int i,a[20],sum=0,n;
 clrscr();
 printf("enter the number of element in the array:");
 scanf("%d",&n);
 printf("Enter the array element:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n array elements are:\n");
 for(i=0;i<n;i++)
 printf("a[%d]=%5d\n",i,a[i]);
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("sum of array elements=%d\n",sum);
 getch();
 }