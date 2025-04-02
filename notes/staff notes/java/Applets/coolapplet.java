// Program using Font Color

import java.applet.*;
import java.awt.*;

public class coolapplet extends Applet
{
	public void paint(Graphics g)
	{
		Font ft = new Font("Courier New",Font.BOLD,18);
		g.setFont(ft);	
		setBackground(Color.green);
		g.setColor(Color.red.green.yellow.red.blue);
		g.drawString("Java is Cool",100,100);
	}
}

/*
<applet code=coolapplet width = 350 height=350>
</applet>
*/