#include<stdio.h>
#include<conio.h>
main()
{
 char a[100],b[100];
 clrscr();
 printf("Enter a string:");
 gets(a);
 strcpy(b,a);
 printf("The copied string is=%s\n",b);
 strrev(a);
 printf("the reversed string is=%s\n",a);
 if(strcmp(a,b)==0)
 printf("Palindrome");
 else
 printf("Not palindrome");
 getch();
}
