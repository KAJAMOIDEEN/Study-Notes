import java.awt.FlowLayout;
import java.text.ParseException;

import javax.swing.BoxLayout;
import javax.swing.JFormattedTextField;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.text.MaskFormatter;

public class MaskInputSample {
  public static void main(String args[]) {

    JFrame frame = new JFrame("Mask Input");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    JLabel label;
    JFormattedTextField input;
    JPanel panel;
    MaskFormatter formatter;

    BoxLayout layout = new BoxLayout(frame.getContentPane(), BoxLayout.Y_AXIS);
    frame.setLayout(layout);

    try {
      label = new JLabel("SSN");
      formatter = new MaskFormatter("###'-##'-####");
      input = new JFormattedTextField(formatter);
      input.setValue("123-45-6789");
      input.setColumns(20);
      panel = new JPanel();
      panel.add(label);
      panel.add(input);
      frame.add(panel);
    } catch (ParseException e) {
      System.err.println("Unable to add SSN");
    }
    frame.pack();
    frame.setVisible(true);
  }
}