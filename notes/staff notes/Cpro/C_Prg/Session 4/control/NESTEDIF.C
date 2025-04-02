/*NESTED IF:
  ~~~~~~~~~
syntax:
~~~~~~~
 if(cond1)
 {
  if(cond2)
  {
  statements;
  }
  else
  {
  statements;
  }
 }
 else
  {
   statements;
  }*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter a numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
  {
   if(a>c)
   {
    printf("%d is greater",a);
   }
   else
    {
     printf("%d is greater",c);
    }
   }
  else
  {
   if(b>c)
    {
     printf("%d is greater",b);
    }
   else
    {
     printf("%d is greater",c);
     }
  }
  getch();
}