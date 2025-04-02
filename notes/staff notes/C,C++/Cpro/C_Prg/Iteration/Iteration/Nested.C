//Program for Nested loop statement
void main()
{
	int a,b,choice;
	char ch='y';
	clrscr();
	printf("Enter Two No:");
	scanf("%d%d",&a,&b);
	do
	{
	printf("\n\t\t1.Add");
	printf("\n\t\t2.Sub");
	printf("\n\t\t3.Mul");
	printf("\n\t\t4.div");
	printf("\n\t\t5.Exit");
	printf("\nEnter U Choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\n Add%d",a+b);
		break;
		case 2:
		printf("\n Sub%d",a-b);
		break;
		case 3:
		printf("\n Mul%d",a*b);
		break;
		case 4:
		printf("\n Div%d",a/b);
		break;
		default:
		exit(0);
	}
	printf("\n Do U Want to Continue y/n");
	scanf("%s",&ch);
	}
	while(ch='Y');
	getch();
}
