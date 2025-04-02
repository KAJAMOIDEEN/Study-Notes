   /*STRING SET
  ~~~~~~~~~~
  SYNTAX:
  ~~~~~~~
   stringset(string,char);*/
#include<stdio.h>
#include<conio.h>
main()
{
 char s1[20],ch;
 clrscr();
 printf("Enter the string\n");
 gets(s1);
 printf("Enter the character:");
 ch=getchar();
 strset(s1,ch);
 printf("The string=");
 puts(s1);
 getch();
}