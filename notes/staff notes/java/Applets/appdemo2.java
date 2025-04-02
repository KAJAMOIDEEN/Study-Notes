import java.awt.*;
import java.applet.*;

public class appdemo2 extends Applet
{
	String str;
	public void init()
	{
	str="welcome";
	}
	public void paint(Graphics g)
	{
	g.drawString(str,10,10);
	}
}
/*<applet code=appdemo2.class width=300 height=300>
</applet>*/
