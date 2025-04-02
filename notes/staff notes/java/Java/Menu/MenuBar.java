import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class MenuBar
{
public static void main(String ar[])
{
JFrame frm;
JMenuBar mbr;
frm=new JFrame("Menu Bar");
frm.setSize(200,100);
frm.setVisible(true);
mbr=new JMenuBar();
JMenu mitem=new JMenu("File");
JMenu mitem1=new JMenu("Edit");

mbr.add(mitem);
mbr.add(mitem1);
JMenuItem filenew=new JMenuItem("New");
JMenuItem fileopen=new JMenuItem("open");
JMenuItem filecut=new JMenuItem("Cut");
JMenuItem filecopy=new JMenuItem("Copy");
mitem.add(filenew);
mitem.addSeparator();
mitem.add(fileopen);
mitem1.add(filecut);
mitem1.add(filecopy);
mitem.setMnemonic(KeyEvent.VK_F);
mitem.setEnabled(true);
int key=KeyEvent.VK_F;

//mitem.setAccelerator(keyStroke);
frm.setJMenuBar(mbr);
frm.setDefaultCloseOperation(frm.EXIT_ON_CLOSE);
}
}
