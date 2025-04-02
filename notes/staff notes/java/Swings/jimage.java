

import javax.swing.*;
import java.awt.event.FocusListener;
import java.awt.event.*;
import java.awt.Color;
import javax.swing.BorderFactory;
import javax.swing.border.Border;
import javax.swing.border.EtchedBorder;
import javax.swing.border.BevelBorder;
import javax.swing.border.LineBorder;


class jimage extends JFrame
{
  public static void main(String args[])
{

   jimage obj=new jimage();
  JPanel panel=new JPanel();
  JButton btnok;
  btnok =new JButton("ok");
//btnok.setIcon(new ImageIcon("mr.jpg"));
btnok.setMnemonic(KeyEvent.VK_O);
btnok.setToolTipText("welcome");
btnok.setBackground(Color.cyan);
btnok.setForeground(Color.red);
btnok.setEnabled(true);

//btnok.setBorder(BorderFactory.createEtchedBorder(EtchedBorder.LOWERED));
//btnok.setBorder(new BevelBorder(BevelBorder.RAISED));
btnok.setBorder(new LineBorder(Color.BLUE, 5, true));
panel.add(btnok);
obj.add(panel);
obj.setVisible(true);
obj.setSize(300,300);
obj.setDefaultCloseOperation(EXIT_ON_CLOSE);

}
}