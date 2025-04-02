//Program for array to find the total and average
void main()
{
	int arr[5],i,sum=0;
	float avg;
	clrscr();
	printf("Enter 5 Elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/5;
	printf("\n Total values is %d",sum);
	printf("\n Average is %f",avg);
getch();
}