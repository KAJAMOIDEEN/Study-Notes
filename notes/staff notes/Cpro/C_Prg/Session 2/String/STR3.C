/*STRING COPY
  ~~~~~~~~~~~
SYNTAX:
~~~~~~~
strcpy(string 1,string 2)
	 |         |
	new str   old str*/

#include<stdio.h>
#include<conio.h>
main()
{
 char s1[50],s2[50];
 clrscr();
 printf("Enter the string\n");
 gets(s1);
 printf("String 1=");
 puts(s1);
 strcpy(s2,s1);
 printf("The string2=");
 puts(s2);
 getch();
}

