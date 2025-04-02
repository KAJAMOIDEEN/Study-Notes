#include<iostream.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	clrscr();

	cout<<"\nRead for A matrix:";
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		cin>>a[i][j];
	    }
	}

	cout<<"\nRead for B matrix:";
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		cin>>b[i][j];
	    }
	}

	cout<<"\nMatrix C = A + B";
	for (i=0;i<2;i++)
	{
	    for (j=0;j<2;j++)
	    {
		c[i][j] = a[i][j] + b[i][j];
		cout<<"\n",c[i][j]);
	    }
	}

	getch();
}


