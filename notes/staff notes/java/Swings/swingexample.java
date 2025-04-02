//Program for Label,Textbox,Textfield,Checkbox,Radio button - using swings

import java.awt.*;
import javax.swing.*;
public class swingexample extends JFrame
{
public swingexample(String s)
{
super(s);
Container con=getContentPane();
con.setLayout(new GridLayout(6,3));

JLabel l=new JLabel("Enter Your Choice :");
JTextField t=new JTextField(20);
JLabel l1=new JLabel("Enter Number Of Line :");
JTextArea ta=new JTextArea(10,10);
JButton b=new JButton("Exit");
JLabel l2=new JLabel("failer :");
JCheckBox c1=new JCheckBox("Fly away",false);
JCheckBox c2=new JCheckBox("is gone",false);
JCheckBox c3=new JCheckBox("Kicked the bucket",false);
JLabel l3=new JLabel("Who has best captain inwhich:");
JRadioButton r=new JRadioButton("tendulkar",false);
JRadioButton r1=new JRadioButton("gangly",false);
con.setBackground(Color.red);
con.add(l);
l.setForeground(Color.cyan);
//l.setBackground(Color.white );
con.add(t);
t.setFont(new Font("Arial",Font.ITALIC,20));
t.setBackground(Color.green);
t.setForeground(Color.blue);
con.add(l1);
l1.setForeground(Color.blue);
l1.setBackground(Color.pink);
con.add(ta);
ta.setFont(new Font("Helvertika",Font.BOLD|Font.ITALIC,20));
ta.setForeground(Color.green);
ta.setBackground(Color.red);
con.add(l2);
l2.setForeground(Color.blue);
l2.setBackground(Color.green);
con.add(c1);
c1.setBackground(Color.blue);
c1.setForeground(Color.white);

con.add(c2);
c2.setBackground(Color.yellow);
c2.setForeground(Color.blue);

con.add(c3);
c3.setBackground(Color.red);
c3.setForeground(Color.white);

con.add(l3);

l3.setForeground(Color.blue);
l3.setBackground(Color.gray);

con.add(r);
r.setBackground(Color.blue);
r.setForeground(Color.white);

con.add(r1);
r1.setBackground(Color.black);
r1.setForeground(Color.white);

con.add(b);
b.setBackground(Color.orange);
b.setForeground(Color.yellow);

}
public static void main(String arg[])
{
swingexample obj=new swingexample(" Entertrainment !");
obj.setSize(500,500);
obj.setVisible(true);
}
}