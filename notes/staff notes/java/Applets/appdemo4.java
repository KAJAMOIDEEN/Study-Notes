import java.awt.*;
import java.applet.*;

public class appdemo4 extends Applet
{
	Image img;
	public void init()
	{
	String str=getParameter("image");
	img=getImage(getCodeBase(),str);
	}
	public void paint(Graphics g)
	{
	g.drawImage(img,20,20,this);
	}
}


