import javax.swing.*;
import javax.swing.JPanel;
import java.awt.event.FocusListener;
import java.awt.event.*;
import javax.swing.JTextArea;

class jtextarea extends JFrame
{
  public static void main(String args[])
{

	jtextarea obj=new jtextarea();
	JPanel panel=new JPanel();
	JTextArea ta=new JTextArea(4,10);	
	panel.add(ta);
	obj.add(panel);
	obj.setSize(300,300);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}