// Program using Font Metrics

import java.awt.*;
import java.applet.*;

public class fontt extends Applet
{
	public void paint(Graphics g)
	{
		String str="My World";
		String str1="Second Line of Font";
		//Font f = new Font("Georgia",Font.ITALIC,16);
		Font ff = new Font("Comic Sans MS",Font.BOLD,22);
		//g.setFont(f);
		g.setFont(ff);
		g.drawString(str,89,78);
		g.drawString(str1,67,90);
	}
}


/*
<applet code=fontt width=350 height=300>
</applet>
*/
