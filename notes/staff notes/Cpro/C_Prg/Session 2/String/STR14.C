#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char value1,value2;
clrscr();
printf("Enter the string");
scanf("%s%s",&value1,&value2);
if(strcmp(value1,value2)>=0)
printf("Value1 is greater than Value2\n");
else if((strcmp(value1,value2)<=0)
printf("Value1 is less than value2\n");
else if(strcmp(value1,value2)==0)
printf("Value1 equals Value2\n");
else
printf("invalid string");
getch();
}