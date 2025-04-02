/* The sectional front view of a hollow shaft
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<graphics.h>
#include<conio.h>
main()
{
 int driver,mode;
 driver=9;
 mode=VGAHI;
 initgraph(&driver,&mode,"\\Tc");
 setpalette(0,14);
 getch();
 setcolor(6);
 rectangle(100,100,200,150);
 rectangle(100,115,200,135);
 getch();
 setfillstyle(3,6);
 floodfill(103,103,6);
 floodfill(103,138,6);
 getch();
 restorecrtmode();
 return;
 }