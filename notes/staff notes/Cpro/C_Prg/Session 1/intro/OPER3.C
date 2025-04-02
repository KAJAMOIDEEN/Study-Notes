/*LOGICAL OPERATOR*/

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter a b c values");
scanf("%d%d%d",&a,&b,&c);
printf("A>B && A>C=%d\n",a>b && a>c );
printf("A>B || A>C=%d\n",a>b || a>c);
printf("!(A>B)=%d", !(a>b));
getch();
}


