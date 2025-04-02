import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.*;
import java.awt.*;
public class menualign
{
public static void main(String ar[])
{
JFrame frm;
JMenuBar mbr;
JCheckBoxMenuItem chk;
JRadioButtonMenuItem rbr1,rbr2;
ButtonGroup bg;
frm=new JFrame("Menu Bar");
frm.setSize(200,100);
frm.setVisible(true);
mbr=new JMenuBar();
JMenu mitem=new JMenu("Edit");
JMenu mnualign =new JMenu("Align");
mbr.add(mitem);
mitem.add(mnualign);

JMenuItem fileleft=new JMenuItem("Left");
JMenuItem fileright=new JMenuItem("Right");
JMenuItem filecenter=new JMenuItem("Center");
chk=new JCheckBoxMenuItem("Left",true);
rbr1=new JRadioButtonMenuItem("Right",true);
rbr2=new JRadioButtonMenuItem("Center",true);
bg=new ButtonGroup();

bg.add(rbr1);
bg.add(rbr2);
mnualign.add(fileleft);
mnualign.add(fileright);
mnualign.add(filecenter);
fileleft.add(chk);
fileright.add(rbr1);
filecenter.add(rbr2);
enableEvents(AWTEvent.MOUSE_EVENT_MASK );
		rbr1.addActionListener(this);
		rbr2.addActionListener(this);
public void actionPerformed( ActionEvent event )
	{
		// Add action handling code here
		System.out.println( event );
	}

mitem.setMnemonic(KeyEvent.VK_F);
mitem.setEnabled(true);
int key=KeyEvent.VK_F;
frm.setJMenuBar(mbr);
frm.setDefaultCloseOperation(frm.EXIT_ON_CLOSE);

}
}
