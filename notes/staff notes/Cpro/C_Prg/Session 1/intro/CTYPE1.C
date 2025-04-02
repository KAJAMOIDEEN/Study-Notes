#include<ctype.h>
main()
{
 char c;
 int a;
 clrscr();
 printf("enter a character:");
 scanf(" %c",&c);
printf("enter a number:");
 scanf("%d",&a);
 if(islower(c))
 {
   printf("\n%c",toupper(c));
   printf("\n%d",toascii(c));
  }
 else if(isupper(c))
 {
   printf("\n%c",tolower(c));
   printf("\n%d",toascii(c));
   }
 else
 printf("\n%c",c);
{
 if(isascii(a))
 {
  printf("\n%c",tolower(a));
  printf("\n%c",toupper(a));
 }
 getch();
 }
}