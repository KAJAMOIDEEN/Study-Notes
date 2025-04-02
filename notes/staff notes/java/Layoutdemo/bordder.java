// Program for Layout - Border Layout

import java.applet.*;
import java.awt.*;
public class bordder extends Applet
{
	public void init()
	{
		int i =0;
		setLayout(new BorderLayout());
		add("North ", new Button("Button "+i++));
		add("South ", new Button("Button "+i++));
		add("East ", new Button("Button "+i++));
		add("West ", new Button("Button "+i++));
		add("Center ", new Button("Button "+i++));
	}
}

/*
<applet code="bordder" width=500 height=500>
</applet>
*/