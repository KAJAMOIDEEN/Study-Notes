struct book
{
	char name[25];
	float price;
	int pages;
};

void main()
{
	struct book b1;
	clrscr();

	printf("\nTo read the structure members:\n");
	printf("\nEnter the book name:");
	gets(b1.name);
	printf("\nEnter the price:");
	scanf("%f",&b1.price);
	printf("\nEnter the total no.of pages:");
	scanf("%d",&b1.pages);

	printf("\nTo display the structure members:\n");
	printf("\n Name: %s\n",b1.name);
	printf("\n Price: %0.2f\n",b1.price);
	printf("\n Total pages: %d\n",b1.pages);
	getch();
}


