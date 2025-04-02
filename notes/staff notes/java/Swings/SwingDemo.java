// program for swing using JFrames

import java.awt.*;
import javax.swing.*;
public class SwingDemo extends JFrame
{
	public SwingDemo( )
	{	
	getContentPane().setLayout(new GridLayout(3,1));
	ImageIcon icon1=new ImageIcon("E:/Faculty/Rajesh/Java2/swing/open.gif");
	ImageIcon icon2=new ImageIcon("E:/Faculty/Rajesh/Java2/swing/new.gif");
	ImageIcon icon3=new ImageIcon("E:/Faculty/Rajesh/Java2/swing/BA.GIF");
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
	new SwingDemo();
	}
}