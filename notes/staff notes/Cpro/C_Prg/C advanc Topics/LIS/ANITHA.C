#include <stdio.h>
#include <conio.h>
main()
{
int rno,m1,m2,tot;
float avg;
FILE*fp;
clrscr();
fp=fopen("disp text","R");
fscanf(fp,"%d%d%d",&rno,&m1,&m2);
tot=m1+m2;
avg=tot/2;
printf("RNO=%d\n",rno);
printf("m1=%d\n",m1);
printf("m2=%d\n",m2);
printf("tot=%d\n",tot);
printf("avg=%0 3f",avg);
fclose(fp);
getch();
}
