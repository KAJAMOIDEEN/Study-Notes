
//Built in mathmatical function
#include<stdio.h>
#include<ctype.h>
void main()
{
	char msg,to_upper,to_lower;
	clrscr();
	printf("Enter Character:");
	scanf("%c",&msg);
	to_upper=toupper(msg);
	to_lower=tolower(msg);
	printf("\n Converted to uppercase=%c",to_upper);
	printf("\n Converted to Lowercase=%c",to_lower);
getch();
}