
/*STRING CONCENTATION
  ~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char a[20],b[20],c;
 clrscr();
 printf("\n Enter string 1:");
 scanf("%s",&a);
 printf("\n Enter string 2:");
 scanf("%s",&b);
 printf("string 1=%s\n string 2=%s\n",a,b);
 c=strcat(a,b);
 printf("\n\n new string=%s",c);
 getch();
}