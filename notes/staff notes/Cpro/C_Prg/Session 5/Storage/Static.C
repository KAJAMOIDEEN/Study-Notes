//Program for Static storage
void sum();
void main()
{
	sum();
	sum();
	sum();
	sum();
getch();
}
void sum()
{
	static int x=1;
	printf("%d",x);
	x=x+1;
}