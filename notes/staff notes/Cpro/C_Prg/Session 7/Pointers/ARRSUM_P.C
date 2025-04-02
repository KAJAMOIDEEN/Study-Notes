// Program To Sum all the elements in the Array using Pointers

void main()
{
	int n,a[25],i,*ptr,sum;
	clrscr();
	printf("\nEnter The Number of Elements");
		scanf("%d",&n);
	printf("\nEnter %d Elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	ptr=&a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
	}
	printf("Sum of Array elements is %d",sum);
getch();
}
