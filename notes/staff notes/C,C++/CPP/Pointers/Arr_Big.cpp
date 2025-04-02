// Program For Pointers and Arrays
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,n,a[25],*ptr;
	clrscr();
	cout<<"\nEnter The Number of Elements : ";
		cin>>n;

	cout<<"Enter  Elements"<<n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	*ptr=a[0];
	//printf("\nValue of a[0] %d",a[0]);
	for(i=0;i<n;i++)
		if(a[i] > *ptr)
			*ptr=a[i];
	cout<<"\nThe Biggest value is"<<*ptr;
	getch();
}


