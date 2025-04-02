//Program for Nested if Statement
void main()
{
int inum;
clrscr();
printf("Enter A Number:");
scanf("%d",&inum);
if (inum % 3 == 0) 
{
	if (inum % 5 == 0) 
	{
		printf("\n The number is divisible by both 3 and 5\n");
	}
	else
	{
		printf("\n The number is divisible by 3 but not by 5\n");
	}
}
getch();
}
