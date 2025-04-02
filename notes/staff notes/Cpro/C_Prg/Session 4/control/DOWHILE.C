/*DO WHILE LOOP STATEMENT(Exit controledloop)
  ~~ ~~~~~ ~~~~ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
syntax:
~~~~~~~
do
{
statements;
}
while(conditions);
*/
#include<stdio.h>
#include<conio.h>
main()
{
 char ch;
 int count=1;
 clrscr();
 printf("Enter some line of text press.to end\n");
 do
 {
 ch=getchar();
 if(ch=='\n')
 {
 count++;
 }
 }
 while(ch!='.');
 printf("you are entered %d lines \n",count);
 getch();
}
