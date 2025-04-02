/*CALLOC:
  ~~~~~~
   It allocate multiple block of memory.
*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
main()
{
 char *str;
 clrscr();
 str=(char*)calloc(15,sizeof(char));
 strcpy(str,"hai welcome");
 printf("String is %s",str);
 free(str);
 getch();
}
