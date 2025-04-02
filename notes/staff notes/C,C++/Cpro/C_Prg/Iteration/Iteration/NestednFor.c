Loop:
	Used to execute given set of statement continously with the given condition is true
- for loop
- while loop
-do while loop




//Program for nested for loop
/*void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
getch();
} */

//While - get executed only if the given condition is true

//do while - get executed only if the given condition is true or false

//Program to print mulitplication value
/*void main()
{
int i,num;
clrscr();
printf("Enter a value:");
scanf("%d",&num);
for(i=1;i<=12;i++)
{
	printf("\n %d *%d=%d",i,num,(i*num));
}
getch();
}*/

void main()
{
int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=4;j++)
	{
		printf("\ni=%d,j=%d",i,j);
	}
	}
getch();
}
