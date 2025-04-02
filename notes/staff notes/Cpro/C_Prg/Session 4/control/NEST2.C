#include<stdio.h>
#include<conio.h>
main()
{
 int c,sal;
 clrscr();
 printf("enter your category\n");
 scanf("%d",&c);
 printf("enter your salary\n");
 scanf("%d",&sal);
 if(c==1)
 {
  if(sal>=7000)
  {
   printf("He is good worker");
  }
  else
  {
    printf("He is not good worker");
  }
 }
 else if(c==2)
 {
  if(sal==5000)
  {
   printf("Your work is satisfaction");
  }
  else
  {
    printf("your work is not satisfaction");
  }
  }
 else
 {
  printf("good bye");
 }
 getch();
}