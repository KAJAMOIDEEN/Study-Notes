// Unary Operators of Pointers

void main()
{
	int a=25,*b;
	b=&a;
	clrscr();
	printf("\nAddress of A is %u ",&a);
	printf("\nAddress of A is %u ",b);
	printf("\nAddress of A is %u ",++b);
	printf("\nAddress of A is %u ",b++);
	printf("\nAddress of A is %u ",--b);
	printf("\nAddress of A is %u ",b--);
	printf("\nAddress of A is %u ",b);
	getch();
}
