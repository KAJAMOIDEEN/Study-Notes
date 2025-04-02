// Program for Using Swing
// JButton Demo

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
//import com.sun.java.swing.*;

public class JButtonDemo extends Applet
{
	JButton b1 = new JButton("JButton 1");
	JButton b2 = new JButton("JButton 2");
	JTextField t = new JTextField(25);
	
	public void init()
	{
	ActionListener a1 = new ActionListener()
	{
		public void actionPerformed(ActionEvent e)
		{
		String name = ((JButton)e.getSource()).getText();
		t.setText(name + "Pressed");
		}
	};
	b1.addActionListener(a1);
	add(b1);
	b2.addActionListener(a1);
	add(b2);
	add(t);
	}

	public static void main(String ar[])
	{
		JButtonDemo applet = new JButtonDemo();
		JFrame frame = new JFrame("TextAreaNew");
		frame.addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.Exit(0);
			}
		});
frame.getContentPane().add(applet,BorderLayout.CENTER);
		frame.setSize(300,100);
		applet.init();
		applet.start();
		frame.setVisible(true);
		}
}
		

