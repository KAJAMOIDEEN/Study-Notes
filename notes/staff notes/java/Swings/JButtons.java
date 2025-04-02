// Program using swing components

import java.awt.*;
import java.awt.event.*;
import java.applet.*;
import javax.swing.*;
//import com.sun.java.swing.*;
public class JButtons extends Applet implements ActionListener
{
	JButton jb1 = new JButton("JButton 1");
	JButton jb2 = new JButton("JButton 2");
	JTextField t = new JTextField(20);
	public void init()
	{
	ActionListener a1 = new ActionListener()
	{	
	public void actionPerfomed(ActionEvent e)
	{
		String name = ((JButton)e.getSource()).getText();
		t.setText(name + " Pressed ");
	}
	}; 
	jb1.addActionListener(a1);
	jb2.addActionListener(a1);
	add(jb1);
	add(jb2);
	add(t);
	}
	public static void main(String are[])
	{
	JButtons applet = new JButtons();
	JFrame frame = new JFrame("TextAreaNew");
	frame.addWindowListener(new WindowAdapter()
	{
	public void windowClosing(WindowEvent e)
	{
	System.exit(0);
	}
	}); 
	frame.getContentPane().add(applet, BorderLayout.CENTER);
	frame.setSize(300,100);
	applet.init();
	applet.start();
	frame.setVisible(true);
	}
}
/*
<applet code =JButtons width=250 height=250>
</applet>
*/