#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
 char s;
 clrscr();
 printf("Enter any character\n");
 scanf("%c",&s);
 if(isalpha(s))
  printf("Alphabet\n");
 else if(isdigit(s))
  printf("Digit\n");
 else if(isspace(s))
  printf("Space\n");
 else
  printf("symbol");
 getch();
}


