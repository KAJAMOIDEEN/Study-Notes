//Passing arrays to the function:
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5];
int descending (int[]);
clrscr();
printf("\n Enter 5 number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
a[i]=descending(a);
printf("\n Descending Order is");
for(i=0;i<5;i++)
{
	printf("\n%d\n",a[i]);
}
getch();
}

int descending(int x[5])
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<5;j++)
	{
		if(x[i]<x[j])
		{
		k=x[i];
		x[i]=x[j];
		x[j]=k;
		}
	}
	}
return (x[i]);
}

