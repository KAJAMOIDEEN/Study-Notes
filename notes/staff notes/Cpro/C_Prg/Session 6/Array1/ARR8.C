
                                                                                                                                                                                                         /*TWO DIMENSIONAL ARRAY
  ~~~ ~~~~~~~~~~~ ~~~~~
  syntax:
  ~~~~~~~
  datatype arryname[row][col];

MATRIX ADDITION*/

#include<stdio.h>
#include<conio.h>
main()
{
 int a[2][2],b[2][2],s[2][2];
 int r,c;
 clrscr();
 printf("Enter matrix A\n");
 for(r=0;r<2;r++)
 {
 for(c=0;c<2;c++)
 {
 printf("a[%d][%d]:",r,c);
 scanf("%d",&a[r][c]);
 }
 }
 printf("Enter matrix B\n");
 for(r=0;r<2;r++)
 {
 for(c=0;c<2;c++)
 {
 printf("b[%d][%d]:",r,c);
 scanf("%d",&b[r][c]);
 }
 }
 for(r=0;r<2;r++)
 {
 for(c=0;c<2;c++)
 {
 s[r][c]=a[r][c]+b[r][c];
 }
 }
 printf("the resultant matrix is\n");
 for(r=0;r<2;r++)
 {
 for(c=0;c<2;c++)
 {
 printf("%5d",s[r][c]);
 }
 printf("\n");
 }
 getch();
}


