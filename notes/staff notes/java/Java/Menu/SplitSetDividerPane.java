import java.awt.Component;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JScrollPane;
import javax.swing.JSplitPane;

public class SplitSetDividerPane {
  public static void main(String[] args) {
    JFrame frame = new JFrame("SplitPaneFrame");

    JLabel leftImage = new JLabel(new ImageIcon("reva.jpg"));
    Component left = new JScrollPane(leftImage);
    JLabel rightImage = new JLabel(new ImageIcon("MR.jpg"));
    Component right = new JScrollPane(rightImage);

    JSplitPane split = new JSplitPane(JSplitPane.HORIZONTAL_SPLIT, left, right);
    split.setDividerLocation(400);
    frame.getContentPane().add(split);

    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(300, 200);
    frame.setVisible(true);
  }
}