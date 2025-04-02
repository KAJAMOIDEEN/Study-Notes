import java.awt.Container;
import java.awt.Font;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;

public class GridLayoutdemo extends JFrame {

  public static void main(String[] args)
 {
    GridLayoutdemo gst = new GridLayoutdemo();
    gst.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    gst.pack();
    gst.setVisible(true);
  }

  public GridLayoutdemo() {
    Container pane = getContentPane();
    pane.setLayout(new GridLayout(2, 2));
    JButton button = new JButton("First");
    pane.add(button);
    button = new JButton("Second with a very long name");
    pane.add(button);
    button = new JButton("Hi");
    button.setFont(new Font("Courier", Font.PLAIN, 36));
    pane.add(button);
    button = new JButton("There");
    pane.add(button);
  }

}