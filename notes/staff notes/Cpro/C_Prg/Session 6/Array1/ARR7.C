/* COPY AN ARRAY FROM ANOTHER ARRAY
   ~~~~ ~~ ~~~~~ ~~~~ ~~~~~~~ ~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[10],b[10],i,n;
 clrscr();
 printf("Enter n values\n");
 scanf("%d",&n);
 printf("Enter array values\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 b[i]=a[i];
 printf("The copied values are\n");
 for(i=0;i<n;i++)
 printf("%d\n",b[i]);
 getch();
}


