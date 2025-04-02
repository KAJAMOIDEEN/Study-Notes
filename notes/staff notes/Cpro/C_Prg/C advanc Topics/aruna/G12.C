#include<stdio.h>
#include<string.h>
#include<graphics.h>
main()
{
char *str="this is a test string";
movetext(1,1,strlen(str),2,10,10);
getch();
}