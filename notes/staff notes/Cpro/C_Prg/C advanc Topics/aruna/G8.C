/*concentric circles*/
#include<graphics.h>
#include<conio.h>
main()
{
int driver,mode,i;
driver=9;
mode=VGAMED;
initgraph(&driver,&mode,"\\tc");
setcolor(11);
for(i=25;i<150;i+=25)
circle(150,150,i);
getch();
restorecrtmode();
}
