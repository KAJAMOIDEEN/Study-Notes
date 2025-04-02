import java.awt.BorderLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;s
import javax.swing.JProgressBar;

public class JProgressBarSetValue extends JFrame
 {
  JProgressBar bar = new JProgressBar();
  JButton step = new JButton("Step");

  public JProgressBarSetValue()
 {
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
setSize(300,300);
    step.addActionListener(new ActionListener()
 {
      public void actionPerformed(ActionEvent e) 
{
        int value = bar.getValue() + 7;
        if (value > bar.getMaximum()) {
          value = bar.getMaximum();
        }
        bar.setValue(value);
      }
    });

    getContentPane().add(bar, BorderLayout.NORTH);
    getContentPane().add(step, BorderLayout.EAST);
    pack();
    setVisible(true);
  }

  public static void main(String arg[]) {
    new JProgressBarSetValue();
  }
}