// Pointers And Character Strings

void main()
{
	char *name;
	int length;
	char *cptr=name;
	name="DELHI";

	while(*cptr!='\0')
	{
		printf("%c is stored at Address %u\n",*cptr,cptr);
		cptr++;
	}
	length=cptr-name;
	printf("\nLength of the String = %d\n",length);
	getch();
}