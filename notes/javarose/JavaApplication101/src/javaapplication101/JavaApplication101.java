import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class MyImage extends JFrame
{
MyImage ( )
{
super(“ImageButton”);
JPanel jp = new JPanel( );
JButton b1 = new JButton(“Image”);

Icon img = new ImageIcon(“ganesh.jpg”);
b1.setIcon(img);
jp.add(b1);
getContentPane().add(jp);
}
}
class JImageDemo
{
public static void main(String args[])
{
MyImage mf = new MyImage ( );
mf.setSize(300,300);   
mf.setVisible(true);
}
}
