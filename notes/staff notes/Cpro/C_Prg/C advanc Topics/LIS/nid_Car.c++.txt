 

#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#define PI 3.14159

void draw_wheel(int x,int y,int theta)
{
 int incr=45;
 setcolor(getmaxcolor());
 setfillstyle(EMPTY_FILL,getmaxcolor());
 for(double i=theta;i<theta+360.0;i+=2*incr)
 {
  sector(x,y,i,i+incr,20,20);
  arc(x,y,i+incr,i+2*incr,20);
  }
}
void draw_car(int ang)
{
int car_color=BLUE;
draw_wheel(50,200,ang);
draw_wheel(200,200,ang);
setcolor(car_color);

line(0,80,639,80);
line(0,300,639,300);
line(25,200,0,200);
line(0,200,0,160);
line(0,160,40,160);
line(40,160,70,130);

line(70,130,170,130);
line(170,130,200,160);
line(200,160,260,160);
line(260,160,260,200);
line(260,200,225,200);
line(175,200,75,200);

arc(50,200,0,180,25);
arc(200,200,0,180,25);

setfillstyle(SOLID_FILL,car_color);
floodfill(150,170,car_color);
}

void main()
{
 int gd,gm,i,j;
 void *bitmap1,*bitmap2;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tc ");
 draw_car(0);
 bitmap1=malloc(imagesize(0,130,270,230));
 getimage(0,130,270,230,bitmap1);
 putimage(0,130,bitmap1,XOR_PUT);
 draw_car(22);
 bitmap2=malloc(imagesize(0,130,270,230));
 getimage(0,130,270,230,bitmap2);
 putimage(0,130,bitmap2,XOR_PUT);
 for(i=0;!kbhit();i+=10)
 {
   if(i>500) i=0;
   putimage(i,130,bitmap1,OR_PUT);
   delay(100);
   putimage(i,130,bitmap1,XOR_PUT);
   putimage(i+5,130,bitmap2,OR_PUT);
   delay(50);
   putimage(i+5,130,bitmap2,XOR_PUT);
 }
 closegraph();
 }
