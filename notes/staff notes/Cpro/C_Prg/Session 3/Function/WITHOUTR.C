//Program function-without arg.without return type
void add();
void main()
{
	clrscr();
	add();
	printf("\n Back in main");
	getch();
}
void add()
{
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	printf("\n Addition value is %d",c);
}
