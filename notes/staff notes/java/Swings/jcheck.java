import javax.swing.JCheckBox;
import javax.swing.*;
import java.awt.event.ItemListener;
import java.awt.event.*;

class jcheck extends JFrame
{
  public static void main(String args[])
{
	jcheck obj=new jcheck();
	JPanel panel;
	panel=new JPanel();
	JCheckBox chk,chk1;
	chk=new JCheckBox("check1");
	chk1=new JCheckBox("check2");
	panel.add(chk);
	panel.add(chk1);
	chk.setSelected(true);
	System.out.println(chk.isSelected());
	obj.add(panel);
	obj.setSize(200,200);
	obj.setVisible(true);
	obj.setDefaultCloseOperation(EXIT_ON_CLOSE);

	chk.addItemListener(new ItemListener()
	{
	public void itemStateChanged(ItemEvent e)
	{
	System.out.println("item is changed");
	}
	});
}
}

	
	
