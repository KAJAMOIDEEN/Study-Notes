/*GOTO
  ~~~~
syntax:
~~~~~~~
 label:
 statement:
 {
 goto label 1;
 }*/
#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();

 printf("Enter any number\n");
 scanf("%d",&n);
 if(n>0)
 goto aa;
 else
 goto bb;
 aa:
 printf("positive\n");
 goto cc;
 bb:
 printf("negative\n");
 cc:
 getch();
 }
