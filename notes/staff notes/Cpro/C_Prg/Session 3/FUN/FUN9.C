/*FUNCTION USING ARRAYS BY SORTING
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
sort(int);
main()
{
 int n;
 clrscr();
 printf("Enter n:");
 scanf("%d",&n);
 sort(n);
 getch();
}
sort(int n)
{
 int a[10],i,j,temp;
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
 printf("Ascending order\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}