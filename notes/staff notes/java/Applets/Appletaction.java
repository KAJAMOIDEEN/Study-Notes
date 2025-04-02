// Program to Demonstrate the Framework methods - Applet

import java.awt.*;
import java.applet.*;

public class Appletaction extends Applet
{
	String s;
	int inits = 0;
	int starts=0;
	int stops=0;
	public void init()
	{
		inits++;	
	}

	public void starts()	
	{
		starts++;
	}

	public void stops()
	{
		stops++;
	}

	public void paint(Graphics g)
	{
		s="Inits : " + inits + " , Starts "+starts + " Stops : "+stops;
		g.drawString(s,150,150);
	}
}

/*
	<applet code="Appletaction" width=500 height=500>
	</applet>
*/