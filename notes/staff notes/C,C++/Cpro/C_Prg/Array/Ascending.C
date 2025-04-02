// Program to arrange the given numbers in Ascending Order

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,t;
	int n[5];
	clrscr();

	printf("\nEnter 5 numbers:");
	for (i=0;i<5;i++)
	{
	    scanf("%d",&n[i]);
	}

	for (i=0;i<5;i++)
	{
	    for (j=i+1;j<5;j++)
	    {
		if (n[i]>n[j])
		{
		   t=n[i];
		   n[i]=n[j];
		   n[j]=t;
		}
	    }
	}

	printf("\nThe Ascending order is:");
	for (i=0;i<5;i++)
	{
	    printf("\n\n%d",n[i]);
	}
	getch();
}