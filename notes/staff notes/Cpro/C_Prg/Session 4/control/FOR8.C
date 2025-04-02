#include<stdio.h>
#include<conio.h>
main()
{
int i,j,x=0,r,c;
clrscr();
printf("Enter the row & column values:");
scanf("%d%d",&r,&c);
if(r==c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
{
x=1;
printf("%5d",x);
}
else
{
x=0;
printf("%5d",x);
}
}
printf("\n");
}
}
else
printf("Row & Column values is not equal");
getch();
}


