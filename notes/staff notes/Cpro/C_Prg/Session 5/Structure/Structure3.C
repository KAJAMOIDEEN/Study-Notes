// Program for Structure using Array
struct student
{
	int rno;
	char name[30];
};

void main()
{
	struct student s[5];
	int i;
	clrscr();

	printf("\nRead 5 student record\n");
	for (i=0;i<5;i++)
	{
		printf("\nStudent[%d]: \n",i+1);
		printf("\nRollNo. : ");
		scanf("%d",&s[i].rno);
		printf("\nName : ");
		scanf("%s",s[i].name);
	}
	printf("\n**************************\n");
	printf("\nDisplay 5 students record:\n");
	for (i=0;i<5;i++)
	{
		printf("\nStudent[%d]: \n",i+1);
		printf("\nRoll No: %d \t Name: %s\n",s[i].rno,s[i].name);
	}
	getch();
}