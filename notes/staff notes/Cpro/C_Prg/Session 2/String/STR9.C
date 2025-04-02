/*COUNTING THE VOWELS IN A GIVEN STRING
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
 char str[25],ch;
 int i,vc=0;
 clrscr();
 printf("Enter a string:");
 gets(str);
 for(i=0;str[i];i++)
 {
 char ch=(str[i]);
 if(ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u')
 {
 vc++;
 }
 }
 printf("There are %d vowels found",vc);
 getch();
}
