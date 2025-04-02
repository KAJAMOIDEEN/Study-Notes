import java.awt.event.*;
import java.awt.Color;
import javax.swing.BorderFactory;
import java.awt.Font;
import javax.swing.JFrame;
import javax.swing.*;
class jfont extends JFrame
{
  public static void main(String args[])
{

   jfont obj=new jfont();
   JPanel panel=new JPanel();
  JButton btn=new JButton("save");
Font f=new Font("Verdana",Font.BOLD,16);
btn.setFont(f);
  panel.add(btn);
  obj.add(panel);
 obj.setSize(300,300);
obj.setVisible(true);

obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}