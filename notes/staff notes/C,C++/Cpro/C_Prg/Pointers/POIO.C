void main()
{
	int a=22,*b;
	b=&a;
	clrscr();
	printf("\nAddress of A is %u",&a);
	printf("\nAddress of A is %u",b);
	printf("\nAddress of B is %u",&b);
getch();
}