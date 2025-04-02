//Program for function with arg without return type
void add(int x,int y);
void mul(int x, int y);
void main()
{
	int a,b;
	clrscr();
	printf("Enter Two value:");
	scanf("%d%d",&a,&b);
	add(a,b);
	mul(a,b);
	getch();
}
void add(int x, int y)
{
	int z;
	z=x+y;
	printf("\n Additional value is %d",z);
}
void mul(int x, int y)
{
	int z;
	z=x*y;
	printf("\n Product of %d",z);
}