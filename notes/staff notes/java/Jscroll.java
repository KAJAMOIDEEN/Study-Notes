
import javax.swing.*;

class Jscroll extends JFrame
{
public static void main(String arg[])
{
     Jscroll ss=new Jscroll();
  JPanel panel=new JPanel();
   JLabel lbl=new JLable("label");
   JScrollPane scroll=new JScrollPane();
panel.add(lbl);

panel.add(scroll);    scroll.setCorner(JScrollPane.UPPER_RIGHT_CORNER,lbl);
ss.add(panel);
ss.setSize(300,300);
ss.setVisible(true);
ss.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}



	