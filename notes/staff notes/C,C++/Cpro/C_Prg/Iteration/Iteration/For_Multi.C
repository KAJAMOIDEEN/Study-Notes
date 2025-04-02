//Program to For Multiplication
void main()
{
	int i,num,sum=1;
	clrscr();
	printf("Enter A Number:");
	scanf("%d",&num);
	for(i=1;i<=20;i++)
	{
		sum=num*i;
		printf("\n%d*%d=%d",i,num,sum);
	}
	getch();
}
