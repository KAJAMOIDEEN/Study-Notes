import javax.swing.*;
import java.awt.event.FocusListener;
import java.awt.event.*;
class jpassword extends JFrame
{
  public static void main(String args[])
{
	jpassword obj=new jpassword();
	JPasswordField pass=new JPasswordField();
	JTextField text1=new JTextField();
	JPanel panel=new JPanel();
	panel.add(pass);
	panel.add(text1);
	pass.setText("enter");
	text1.setText("enter ur name");
	pass.setEditable(true);
	obj.add(panel);
	obj.setSize(200,200);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
	pass.addFocusListener(new FocusListener()
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

	