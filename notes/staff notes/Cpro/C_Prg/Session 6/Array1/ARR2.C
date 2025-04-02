/*PRINTING THE ARRAY ELEMENT IN REVERSE ORDER*/
/*  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  */
#include<stdio.h>
#include<conio.h>
main()
{
 int a[5],i;
 clrscr();
 printf("Enter 5 elements:\n");
 for(i=0;i<5;i++)
 {
 printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("The array elements are:");
 for(i=0;i<5;i++)
 {
 printf("%d\t",a[i]);
 }
 printf("\n The array element in reverse:");
 for(i=4;i>=0;i--)
 {
 printf("%3d",a[i]);
 }
 getch();
 }