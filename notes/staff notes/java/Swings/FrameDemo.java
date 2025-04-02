import java.awt.*;
import javax.swing.*;

public class FrameDemo extends JFrame
{
	public FrameDemo(String title)
	{
	super(title);
	}

	public static void main(String are[])
	{
		FrameDemo fd = new FrameDemo("Swinging in the Frame");
		fd.setVisible(true);
		fd.setSize(300,300);	
fd.setDefaultCloseOperation(jframe.EXIT_ON_CLOSE);
	}
}
