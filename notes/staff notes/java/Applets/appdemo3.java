import java.awt.*;
import java.applet.*;

public class appdemo3 extends Applet
{
	Image img;
	public void init()
	{
	img=getImage(getCodeBase(),"reva.jpg");
	}
	public void paint(Graphics g)
	{
	g.drawImage(img,50,50,this);
	}
}

/*<applet code=appdemo3 width=300 height=350>
</applet>*/
