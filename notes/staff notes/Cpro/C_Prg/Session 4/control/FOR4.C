#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k;
clrscr();
for(i=6;i>=1;i--)
{
printf(" ");
for(j=1;j<=i;j++)
{
printf(" ");
}
for(k=6;k>=i;k--)
{
printf("%d",k);
}
printf("\n");
}
getch();
}

