//Program for String Concatenation
#include<string.h>
void main()
{
	char str[20],str1[20];
	printf("\n Enter A First String:");
	gets(str);
	printf("\n Enter A Second String:");
	gets(str1);
	printf("\n The Concatenation string is:%s",strcat(str,str1));
getch();
}
