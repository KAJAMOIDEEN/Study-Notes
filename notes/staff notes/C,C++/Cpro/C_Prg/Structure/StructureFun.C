struct emp
{
	char name[30];
	float sal;
}e;

void main()
{
	void display(struct emp);
	clrscr();
	printf("\nEnter the name & salary:\n");
	scanf("%s %f",e.name,&e.sal);
	display(e);
	getch();
}

void display(struct emp e1)
{
	printf("\nName: %s\n",e1.name);
	printf("\nSalary: %0.2f\n",e1.sal);
}

