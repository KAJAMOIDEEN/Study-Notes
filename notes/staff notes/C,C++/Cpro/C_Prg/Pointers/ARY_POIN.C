
// Array of Pointers

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[10],*ptr;
	clrscr();
	printf("\nEnter the Number of Elements ");
		scanf("%d",&n);
	printf("\nEnter The array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		*ptr=a[0];
                   }
	for(i=0;i<n;i++)
		if(a[i]>*ptr)
		*ptr=a[i];
printf("\nThe Biggest Element in the Array is %d",*ptr);
	getch();
}
