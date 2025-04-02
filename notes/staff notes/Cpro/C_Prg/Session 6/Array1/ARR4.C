/*FIND GREATEST AMONG GIVEN NUMBERS OF ARRAY
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[100],i,m,n;
 clrscr();
 printf("Enter n elements\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 m=a[0];
 for(i=1;i<n;i++)
 {
 if(a[i]>m)
 {
 m=a[i];
 }
 }
 printf("%d is greater\n",m);
 getch();

}
