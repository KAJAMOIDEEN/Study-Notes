
/*TRANSPOSE MATRIX
  ~~~~~~~~~~~~~~~~~  */
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n,a[5][5];
clrscr();
printf("enter the size of matrix:");
scanf(" %d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("A matrix \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf(" the transpose matrix are \n ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
getch();
}








