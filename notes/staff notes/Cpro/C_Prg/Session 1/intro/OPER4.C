/*Assingment Operator(or)Short-hand Assingment Operator*/

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,e;
clrscr();
printf("Enter a to e values:\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
a+=5;  /* a=a+5    a=a+b; (or) a+=b; */
b-=5;   /* b=b-5*/
c*=5;   /* c=c*5 */
d/=5;   /* d=d/5    quotient */
e%=5;   /*e=e%5    remainder*/
printf("\n a+5=%d \n b-5=%d \n c*5=%d \n d/5=%d \n e=%d\n",a,b,c,d,e);
getch();
}