/*ENUMERATOR:
  ~~~~~~~~~~~
  SYNTAX:
  ~~~~~~~
       enum var name{list};
  ex:
  ~~
    enum color{red=1,green,pink,yellow};*/

#include<stdio.h>
#include<conio.h>
main()
{
 int code;
 enum color{red=1,blue=3,green,white=9,yellow};
 clrscr();
 printf("Enter any number:\n");
 scanf("%d",&code);
 switch(code)
 {
 {
 case red   :printf("red\n");break;
 case blue  :printf("blue\n");break;
 case green :printf("green\n");break;
 case white :printf("white\n");break;
 case yellow:printf("yellow\n");break;
 default:printf("Invalid option");
 }
 }
 getch();
}
