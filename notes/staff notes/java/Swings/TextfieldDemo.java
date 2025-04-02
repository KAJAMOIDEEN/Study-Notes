// program for Textfield and Label using Swing
import java.awt.*;
import javax.swing.*;

public class TextfieldDemo extends JFrame
{
	public TextfieldDemo()
	{
	Container con = getContentPane();
	con.setLayout(new FlowLayout());
	JLabel jl = new JLabel("Enter ur Name");
	con.add(jl);
	JTextField tf = new JTextField(20);
	con.add(tf);	
	pack();
	setSize(500,500);
	setVisible(true);
	}

	public static void main(String ar[])	
	{
		new TextfieldDemo();
	}
}