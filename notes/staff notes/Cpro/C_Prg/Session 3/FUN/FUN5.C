/*CALLING FUN FROM MAIN() AND SUB FUN*/

#include<stdio.h>
#include<conio.h>
add();
sum(int);
calc(int,int);
main()
{

clrscr();
 add();
 printf("GOOD EVENING\n");
 getch();
 }

 add()
 {
 int a;
 printf("Enter a\n");
 scanf("%d",&a);
 sum(a);
 printf("HELLO\n");
 }
 sum(int x)
 {
 int y;
 printf("Enter y\n");
 scanf("%d",&y);
 calc(x,y);
 printf("HAI\n");
 }
 calc(int p,int q)
 {
 int r;
 r=p+q;
 printf("RES=%d\n",r);
 }

