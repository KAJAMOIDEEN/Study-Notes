//Array -Accepting values from the user

void main()
{
int s[5],a;
clrscr();
printf("Enter 5 Element :\n");
for(a=0;a<5;a++)
{
	scanf("%d",&s[a]);
}
printf("value U Entered are \n");
for(a=0;a<5;a++)
{
	printf("\n%d",s[a]);
}
getch();
}
