#include<stdio.h>
#include<string.h>
main()
{
char name[30];
int len;
clrscr();
printf("Enter your name:");
gets(name);
len=strlen(name);
strrev(name);
printf("The length of the string is:%d\n",len);
printf("The reversed string is:%s",name);
getch();
}