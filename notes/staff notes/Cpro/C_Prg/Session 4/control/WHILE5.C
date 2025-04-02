
/* Reverse of the string */

#include<stdio.h>
#include<conio.h>
main()
{
 char a[20];
 int i,c=0;
 clrscr();
 printf("Enter a string:");
 gets(a);
 i=0;
 while(a[i]!='\0')
 {
   c++;
   i++;
 }
 i=c-1;
 while(i>=0)
 {
  printf("%c",a[i]);
  i--;
 }
 getch();
}