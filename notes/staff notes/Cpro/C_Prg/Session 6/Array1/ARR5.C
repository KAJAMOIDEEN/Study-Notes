/*ARRAY SORTING:(Bubble sort method)
  ~~~~~ ~~~~~~~ ~~~~~~~ ~~~~ ~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[5],t,i,j;
 clrscr();
 printf("Enter 5 elements\n");
 for(i=0;i<5;i++)
  {
  scanf("%d",&a[i]);
  }
 /*sorting*/
 for(i=0;i<=4;i++)
 {
   for(j=i+1;j<5;j++)
  {
   if(a[i]>a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
   }
  }
 }
 printf("The sorted array is\n");
 for(i=0;i<5;i++)
 {
  printf("%3d",a[i]);
 }
 getch();
}
