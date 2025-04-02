/*steps*/

#include<conio.h>
#include<graphics.h>
main()
{
 int driver,mode,colr,x,y,i;
 driver=9;
 mode=VGAMED;
 initgraph(&driver,&mode,"\\Tc");
 setcolor(12);
 x=100,y=100;
 for(i=1;i<=6;i++)
 {
  bar(x,y,x+100,y+150);
  x=x+50;
  y=y+50;
 }
 getch();
 restorecrtmode();
}

