 //Program for String Copy
#include<string.h>
void main()
{
	char str[20],str1[20];
	clrscr();
	printf("\n Enter the first string:");
	gets(str);
	printf("\n Enter the second string:");
	gets(str1);
	printf("\n Before copy");
	printf("\nEnter the first string is %s",str);
	printf("\nEnter the second string is %s",str1);
	strcpy(str,str1);
	printf("\n After copy");
	printf("\nEnter the first string is %s",str);
	printf("\nEnter the second string is %s",str1);
	getch();
	}


