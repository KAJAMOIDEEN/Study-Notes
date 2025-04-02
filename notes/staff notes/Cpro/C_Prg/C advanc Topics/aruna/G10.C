
/*chain of a circle*/

#include<stdio.h>
#include<graphics.h>
main()
{
int driver,mode,i;
driver=9;
mode=VGAMED;
initgraph(&driver,&mode,"\\TC");
for(i=50;i<=400;i=i+30)
circle(i,i+30,50);
getch();
restorecrtmode();
}
