import javax.swing.JCheckBox;
import javax.swing.*;
import java.awt.event.ItemListener;
import java.awt.event.*;

class jradio extends JFrame
{
  public static void main(String args[])
{
	jradio obj=new jradio();
	JPanel panel=new JPanel();
	JRadioButton rd1=new JRadioButton("red");
	JRadioButton rd2=new JRadioButton("blue");
	ButtonGroup group;
	group=new ButtonGroup();
	group.add(rd1);
	group.add(rd2);
	panel.add(rd1);
	panel.add(rd2);
	obj.add(panel);
	obj.setSize(200,200);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
	rd1.setSelected(false);
	System.out.println(rd1.isSelected());
}
}




	
	
	
	