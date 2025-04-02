// Program for Layout - Flow Layout 

import java.awt.*;
import java.applet.*;

public class Flow extends Applet
{
	public void init()	
	{
		setLayout(new FlowLayout());
		for(int i =1;i<=50;i++)
			add(new Button("Button "+i));
	}
}

/*
<applet code ="Flow" width=500 height=500>
</applet>
*/