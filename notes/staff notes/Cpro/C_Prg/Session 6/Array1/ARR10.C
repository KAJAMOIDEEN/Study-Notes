

/*MATRIX MULTIPLICATION
  ~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[2][2],b[2][2],c[2][2]={0},i,j,k;
 clrscr();
  printf("Enter the A matrix\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   scanf("%d",&a[i][j]);
  }
  printf("Enter B matrix\n");
   for(i=0;i<2;i++)
   {
   for(j=0;j<2;j++)
   scanf("%d",&b[i][j]);
   }
  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {

  for(k=0;k<2;k++)
  {
  c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
  }
  }
  printf("Matrix Multiplication\n");
  for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
  printf("%d\t",c[i][j]);
  }
  printf("\n");
  }
  getch();

}