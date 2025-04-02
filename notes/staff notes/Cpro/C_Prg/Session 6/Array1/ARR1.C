
/*OCCARENCE OF AN ELEMENT
  ~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<conio.h>
main()
{
 int a[30],i,el,count=0,n;
 clrscr();
 printf("Enter the limit\n");
 scanf("%d",&n);
 printf("Enter %d elements;\n",n);
 for(i=0;i<n;i++)
 {
 printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("Enter the elements to find:");
 scanf("%d",&el);
 for(i=0;i<n;i++)
 {
 if(a[i]==el)

 count++;
 }
 printf("The elements found %d times in the arrays \n",count);
 getch();
}