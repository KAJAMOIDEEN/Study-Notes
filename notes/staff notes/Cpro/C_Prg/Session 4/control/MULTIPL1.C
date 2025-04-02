#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
 char ch;
 clrscr();
 printf("Enter a character:");
 scanf("%c",&ch);
 ch=tolower(ch);
 if(ch=='a')
 {
 printf("vowel");
 }
 else if(ch=='e')
 {
 printf("vowel");
 }
 else if(ch=='i')
 {
 printf("vowel");
 }
 else if(ch=='o')
 {
 printf("vowel");
 }
 else if(ch=='u')
 {
 printf("vowel");
 }
 else
 {
 printf("it is not a vowel");
 }
 getch();
 }
