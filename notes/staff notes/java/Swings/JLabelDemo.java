// program using swing for content pane

import java.awt.*;
import javax.swing.*;
public class  JLabelDemo extends JFrame
{
	public JLabelDemo( )
	{
	getContentPane().setLayout(new GridLayout(3,1));
	ImageIcon icon1=new ImageIcon("Calv.gif");
     	ImageIcon icon2=new ImageIcon("Hobb.gif");
     	ImageIcon icon3=new ImageIcon("Swrd.gif");
     	JLabel l1=new JLabel("Calvin",icon1,SwingConstants.LEFT);
     	JLabel l2=new JLabel("Hobbes",icon2,SwingConstants.LEFT);
     	JLabel l3=new JLabel("Something else",icon3,SwingConstants.LEFT);
	getContentPane( ).add(l1);
     	getContentPane( ).add(l2);
     	getContentPane( ).add(l3);
	setSize(500,500);
	setVisible(true);
	pack();
	}
	
	public static void main(String args[])
	{
	new JLabelDemo();
	}
}

/*
<applet code="JLabelDemo.class" width=300 height=300>
</applet> 
*/