import java.awt.event.*;
import java.awt.Color;
import javax.swing.BorderFactory;
import java.awt.Font;

class jfont extends JFrame
{
  public static void main(String args[])
{

   jfont obj=new jfont();
   JPanel panel=new JPanel();
  JButton btn;
   btn=new JButton("save");
Font f=new Font("Times New Roman",Font.PLAIN,12);
btn.setFont(f);
  panel.add(btn);
  obj.add(panel);