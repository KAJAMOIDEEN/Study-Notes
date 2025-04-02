import java.awt.*;
import java.applet.*;


public class MyHourGlass extends Applet
{
	public void paint(Graphics g)
	{
	int numx[] = {30, 200, 30, 200, 30};
	int numy[] = {30, 30, 200, 200, 30};
	int num = 5;
	
	g.drawPolygon(numx, numy, num); 
  	}
} 
	
/*
<applet code=MyHourGlass width=400 height=400>
</applet>
*/   