import javax.swing.*;
import javax.swing.JPanel;

class jpaneldemo extends JFrame
{
	public static void main(String args[])
	{
	jpaneldemo frame=new jpaneldemo();
	JPanel panel=new JPanel();
	JLabel lbl=new JLabel("Name");
	JButton btn=new JButton();
	JButton btn1=new JButton();
        	panel.add(lbl);
        	panel.add(btn);
	panel.add(btn1);
	frame.add(panel);
	panel.setVisible(false);
	frame.setSize(200,200);
	frame.setVisible(true);
	frame.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
}