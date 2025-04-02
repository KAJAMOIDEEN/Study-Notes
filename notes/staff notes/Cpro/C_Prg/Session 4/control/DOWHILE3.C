#include<stdio.h>
#include<conio.h>
main()
{
int a,b,i,n;
clrscr();
printf("Enter the no of terms\n");
scanf("%d",&n);
a=0;
b=1;
printf("%d\t%d\t",a,b);
n=n-2;
do
{
i=a+b;
printf("%d\t",i);
a=b;
b=i;
n--;
}while(n>=0);
getch();
}