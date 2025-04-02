//Program for factorial 
void main()
{
	int i,num,fact;
	clrscr();
	printf("enter A number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("\n The Factorial is:%d",fact);
	}
getch();
}