/*PASCAL TRIANGLE*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],n,r,c;
 clrscr();
 printf("Enter the row size");
 scanf("%d",&n);
 for(r=0;0<n;r++)
 {
 for(c=0;c<=r;c++)
 {
 if(c==0)
 {
 a[r][c]=1;
 }
 else if(r==c)
 {
 a[r][c]=1;
 }
 else
 {
 a[r][c]=a[r-1][c-1]+a[r-1][c];
 }
 }
 }
 for(r=0;r<n;r++)
 {
 for(c=0;c<=r;c++)
 {
 printf("%4d",a[r][c]);
 }
 printf("\n");
 }
 getch();
 }