
/* Sum of 1 to n */

#include<stdio.h>
#include<conio.h>
main()
{
  int i=1,sum=0,n;
  clrscr();
  printf("Enter the n value:");
  scanf("%d",&n);
  while(i<=n)
  {
    sum=sum+i;
    i++;
  }
 printf("The sum is %d",sum);
  getch();
}