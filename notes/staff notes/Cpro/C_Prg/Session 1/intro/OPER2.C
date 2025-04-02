
/*RELATIONAL OPERATOR*/

#include<stdio.h>
#include<conio.h>
main()
{
int a,b;                   /*true--->1*/
clrscr();                     /*false-->0*/
printf("Enter a and b");
scanf("%d%d",&a,&b);
printf("A<B=%d\n",a<b);
printf("A<=B=%d\n",a<=b);
printf("A>B=%d\n",a>b);
printf("A>=B=%d\n",a>=b);
printf("A==B=%d\n",a==b);
printf("A!=B=%d",a!=b);
getch();
}