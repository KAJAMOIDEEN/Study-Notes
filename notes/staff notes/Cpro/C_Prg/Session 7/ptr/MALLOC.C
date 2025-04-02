/*MALLOC:
  *******
*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<math.h>
main()
{
int *p,i,n;
float *q;
clrscr();
p=(int*)malloc(6*sizeof(int));
q=(float*)malloc(6*sizeof(float));
if(p==NULL)
{
printf("\n memory not created!");
exit(0);
}
else
{
printf("\n enter the 6 memory elements:\n");
for(i=0;i<6;i++)
{
printf("\n enter the %d elements:",i);
scanf("%d",&(*p)+i);
}
for(i=0;i<6;i++)
{
*(q+i)=sqrt(*(p+i));
}
printf("\n square root of memory contents are:\n");
printf("\n content \t square root \n");
for(i=0;i<6;i++)
{
printf("\n\t%d\t%f",*(p+i),*(q+i));
}
}
free(p);
free(q);
getch();
}



   
   