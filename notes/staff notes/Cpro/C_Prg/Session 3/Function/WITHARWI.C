//Program Function with arg with return type
int cube(int);
void main()
{
	int x,cu;
	clrscr();
	printf("Enter a value:");
	scanf("%d",&x);
	cu=cube(x);
	printf("\n Cube value is %d",cu);
	getch();
}
int cube(int x)
{
	int z;
	z=x*x*x;
	return z;
}