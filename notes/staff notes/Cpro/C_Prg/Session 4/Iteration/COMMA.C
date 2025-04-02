// Program for comma operator

void main()
{
	int i,j;
	clrscr();

	for(i=1,j=5;i<10;i++,j--)
	{
		printf("\nI=%d",i);
		printf("\n\tJ=%d",j);
	}
	getch();
}