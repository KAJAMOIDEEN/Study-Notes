void first();
void second();
void third();
void main()
{
clrscr();
first();
getch();
}

void first()
{
	printf("This is the first Function");
	second();
}
void second()
{
	printf("This is the Second function");
	third();
}
void third()
{
	printf("This is the Third function");
}