/* Program for Null Pointer
	When a integer variable is assigned a value of 0 to a variable then it is said to be a null pointer value */

void main()
{
	int *a;
	char *b;
	clrscr();
	*a=*b=0;
	printf("\nAddress of A is %u",a);
	printf("\nValue of A is %u",b);
	getch();
}
