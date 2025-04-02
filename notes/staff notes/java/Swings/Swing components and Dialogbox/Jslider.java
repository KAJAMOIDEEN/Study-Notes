import javax.swing.JSlider;
import javax.swing.*;

public class Jslider extends JFrame
{
  public static void main(String[] argv) throws Exception 
{
      Jslider ss=new Jslider();
JPanel panel=new JPanel();
/* int initValue = 0;
    int minimum = 10;
    int maximum = 100;*/

    JSlider slider = new JSlider(JSlider.VERTICAL, minimum, maximum, initValue);
    // Create a horizontal slider with custom min and max; value is set to the middle
  int minimum = -255;
   int maximum = 256;
    slider = new JSlider(minimum, maximum);
panel.add(slider);
ss.add(panel);
   ss.setSize(300,300);
ss.setVisible(true);
ss.setDefaultCloseOperation(EXIT_ON_CLOSE);

  }
}