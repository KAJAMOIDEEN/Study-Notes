// Program for easy Graphics

import java.awt.*;
import java.applet.*;
public class Rect extends Applet
{
	public void paint(Graphics g)
	{
	g.drawString("Second Applet Program",10,25);
	g.draw3D(45,70,250,150,true);
	}
}

//<applet code=Rect width=450 height=400></applet>

