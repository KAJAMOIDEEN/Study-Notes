#include<stdio.h>
void main()
{
    int i,j,k,a[10][10],b[10][10],c[10][10];
    clrscr();
    printf("Enter The A Matrix ");
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);

printf("Enter The B Matrix \n");
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       scanf("%d",&b[i][j]);

       printf("\nMatrix Multiplication is ");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
	for(k=0;k<3;k++)
	{
	c[i][j]=0;
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
     }
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
	  printf("%d",c[i][j]);
	printf("\n");
    }
}