import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Menu extends JApplet
{
public void init()
{
Container contentPane=getContentPane();
Icon newIcon=new ImageIcon("new.gif","Create a new document");
Icon openIcon=new ImageIcon("open.gif","Open an existing document");
JMenuBar mb=new JMenuBar();
JMenu fileMenu=new JMenu("File");
JMenuItem newItem=new JMenuItem("New",newIcon);
JMenuItem openItem=new JMenuItem("Open",openIcon);
JMenuItem saveItem=new JMenuItem("Save");
JMenuItem saveAsItem=new JMenuItem("Save As");
JMenuItem exitItem=new JMenuItem("Exit",'x');
fileMenu.add(newItem);
fileMenu.add(openItem);
fileMenu.add(saveItem);
fileMenu.add(saveAsItem);
fileMenu.addSeparator();
fileMenu.add(exitItem);
mb.add(fileMenu);
setJMenuBar(mb);
}
}
/*
<applet code="Menu" width=300 height=175>
</applet>
*/