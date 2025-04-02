// program using Applet
import java.io.*;
import java.awt.*;
import java.applet.*;

public class Apps1 extends Applet
{
	Button b = new Button("Get Text");
	Button b1 = new Button("Set Text");
	TextField t = new TextField("Starting Text",30);
	String s = new String();

	public void init()
	{
		add(b);
		add(b1);
		add(t);		
	}

	public boolean action(Event a,Object ar)
	{
		if(a.target.equals(b))
		{
			getAppletContext().showStatus(t.getText());
				s=t.getSelectedText();
			if(s.length()==0)
				s=t.getText();
				t.setEditable(true);
		}

		else if(a.target.equals(b1))
		{
			t.setText("Inserted by Button2 "+s);
			t.setEditable(false);
		}

		else
			return super.action(a,ar);
			return true;
	}
}

/*
<applet code="Apps1.java" width=500 height=500>
</applet>
*/