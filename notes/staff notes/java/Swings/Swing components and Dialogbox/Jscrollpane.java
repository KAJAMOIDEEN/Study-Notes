 import javax.swing.*;
import javax.swing.JFrame;
import javax.swing.JScrollPane.*;
import java.awt.BorderLayout;
class Jscrollpane extends JFrame
{
   public static void main(String ar[])
{
   JPanel panel=new JPanel();
    Jscrollpane jsc=new Jscrollpane();
JLabel lab=new JLabel("Name");
   JTextArea area=new JTextArea(7,7);
JScrollPane scroll=new JScrollPane(area);
jsc.add(scroll, BorderLayout.CENTER);
//scroll.setCorner(JScrollPane.UPPER_RIGHT_CORNER, new JButton("..."));
scroll.setCorner(JScrollPane.LOWER_RIGHT_CORNER,lab);
//scroll.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED);
scroll.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_AS_NEEDED);
scroll.setColumnHeaderView(lab);
panel.add(lab);
panel.add(scroll);
jsc.add(panel);
jsc.setSize(300,300);
jsc.setVisible(true);
jsc.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}


