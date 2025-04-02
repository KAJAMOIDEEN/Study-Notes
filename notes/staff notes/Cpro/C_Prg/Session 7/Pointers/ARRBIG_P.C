// Program For Pointers and Arrays
void main()
{
	int i,j,n,a[25],*ptr;
	clrscr();
	printf("\nEnter The Number of Elements : ");
		scanf("%d",&n);

	printf("Enter %d Elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	*ptr=a[0];
	//printf("\nValue of a[0] %d",a[0]);
	for(i=0;i<n;i++)
		if(a[i] > *ptr)
			*ptr=a[i];
	printf("\nThe Biggest value is %d",*ptr);
	getch();
}


