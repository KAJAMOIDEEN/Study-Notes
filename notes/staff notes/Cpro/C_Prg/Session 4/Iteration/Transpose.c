//Program to print the transpose of the given matix
int a[5][5],i,j,m,n;
void main()
{

	clrscr();
	input();
	value();
	original();
	transpose();
}
input()
{
	printf("\n Enter the order of matrix:");
	scanf("%d%d",&m,&n);
}
value()
{
	printf("\n Enter the value of matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
original()
{
	printf(" The original matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
transpose()
{
	int i,j;
	clrscr();
	printf("The Transpose matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
