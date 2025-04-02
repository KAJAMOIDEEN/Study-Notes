/*READING A STRING CHARACTER BY CHARACTER
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char str[15];
 char ch;
 int i=0;
 clrscr();
 printf("Enter a string:");
 do
 {
 ch=getchar();
 if(ch=='\n')
 {
 break;
 }
 str[i]=ch;
 i++;
 }
 while(1);
 printf("The string is %s\n",str);
 getch();
}