import java.awt.*;
import javax.swing.*;
public class Flowdemo extends JFrame
{
	JLabel lname = new JLabel("Name");
	JTextField tx = new JTextField(25);
	JTextField tx1 = new JTextField(25);
                  
	public Flowdemo(String ar)
	{
	super(ar);
	setLayout(new FlowLayout());
	add(lname);
	add(tx);
	add(tx1);
	}
	
	public static void main(String arr[])
	{
	Flowdemo fds = new Flowdemo("FlowLayout Demo");	
	fds.setSize(450,500);
	fds.setVisible(true);
	fds.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
}


	