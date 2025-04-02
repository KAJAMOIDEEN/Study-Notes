// Pointers And Character Strings
#include<iostream.h>
#include<conio.h>
void main()
{
	char *name;
	int length;
	char *cptr=name;
	name="DELHI";

	while(*cptr!='\0')
	{
		cout<<" is stored at Address\n"<<*cptr<<cptr;
		cptr++;
	}
	length=cptr-name;
	cout<<"\nLength of the String =\n"<<length;
	getch();
}