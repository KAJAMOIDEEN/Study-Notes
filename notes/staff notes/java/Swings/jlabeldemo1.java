
import javax.swing.*;
import javax.swing.JPanel;
import javax.swing.JLabel;

class jlabeldemo1 extends JFrame
{

   public static void main(String arg[])
{
	jlabeldemo1 obj=new jlabeldemo1();
	JPanel panel=new JPanel();
	ImageIcon image=new ImageIcon("mr.jpg");
	JLabel label=new JLabel("welcome");
	JLabel label2=new JLabel(image);
	
	panel.add(label);
	panel.add(label2);
	obj.add(panel);
	
	obj.setSize(300,300);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
	String caption=label.getText();
	System.out.println(caption);
}
}


