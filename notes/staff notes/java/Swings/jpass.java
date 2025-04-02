import javax.swing.*;
import javax.swing.JPanel;
import java.awt.event.FocusListener;
import java.awt.event.*;
import javax.swing.JPasswordField;

class jpass extends JFrame
{
  public static void main(String args[])
{

	jpass obj=new jpass();
	JPanel panel=new JPanel();
	JPasswordField pass=new JPasswordField();
	panel.add(pass);
	pass.setText("enter the password");
	obj.add(panel);

	obj.setSize(300,300);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}
