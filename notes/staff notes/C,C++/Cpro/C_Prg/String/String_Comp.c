//Program for string comparsion
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int i;
	clrscr();
	printf("Enter the first string\n");
	gets(str1);
	printf("Enter the second string\n");
	gets(str2);
	printf("\n first name%s",str1);
	printf("\n second name%s",str2);
	i=strcmp(str1,str2);
	if(i==0)
		printf("\n both are equal");
	else
		printf("\n both are not equal");
	getch();

}

