
/* Length of the string */

#include<stdio.h>
#include<conio.h>
main()
{
  char a[100];
  int i;
  clrscr();
  printf("Enter the string:");
  gets(a);
  i=0;
  while(a[i]!='\0')
  {
    i++;
  }
  printf("Length=%d",i);
  getch();
}