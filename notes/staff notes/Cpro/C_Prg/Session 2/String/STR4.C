/*STRING COMPARE
  ~~~~~~~~~~~~~~
SYNTAX:
~~~~~~~
   strcmp(string 1,string 2);
   It compare case sensitive also*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char s1[20],s2[30];
 clrscr();
 printf("Enter the first string\n");
 gets(s1);
 printf("Enter the second string\n");
 gets(s2);
 if(strcmp(s1,s2)==0)
 printf("The string are equal");
 else
 printf("The string are not equal");
 getch();
}
