import javax.swing.*;
import java.awt.event.FocusListener;
import java.awt.event.*;
class jtext extends JFrame
{
  public static void main(String args[])
{
	jtext obj=new jtext();
	JTextField text=new JTextField();
	JTextField text1=new JTextField();
	JPanel panel=new JPanel();
	panel.add(text);
	panel.add(text1);
	text.setText("enter ur name");
	text1.setText("enter ur name");
	text.setEditable(true);
	obj.add(panel);
	obj.setSize(200,200);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
	text.addFocusListener(new FocusListener()
	{
	public void focusGained(FocusEvent e)
	{
	System.out.println("gained");
	}
	public void focusLost(FocusEvent e)
	{
	System.out.println("lost");
	}
	});
}
}

	