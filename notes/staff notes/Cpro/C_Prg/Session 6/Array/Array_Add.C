#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	clrscr();

	printf("\nRead for A matrix:");
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		scanf("%d",&a[i][j]);
	    }
	}

	printf("\nRead for B matrix:");
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		scanf("%d",&b[i][j]);
	    }
	}

	printf("\nMatrix C = A + B");
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		c[i][j] = a[i][j] + b[i][j];
		printf("\n%d",c[i][j]);
	    }
	}

	getch();
}


