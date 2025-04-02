/*GEETING AND PRINTING ARRAY*/
#include<stdio.h>
#include<conio.h>
main()
{
int i;
char a[5];
clrscr();
printf("Enter the character");
for(i=0;i<5;i++)
{
scanf("%c",&a[i]);
}
printf("the array values are:\n");
for(i=0;i<5;i++)
{
printf("a[%d]=%c\n",i,a[i]);
}
getch();
}
