import javax.swing.JSlider;
import javax.swing.*;

public class Jslider1 extends JFrame
{
  public static void main(String[] argv) throws Exception 
{
      Jslider1 ss=new Jslider1();
    JPanel panel=new JPanel();  
    JSlider slider = new JSlider();
panel.add(slider);
ss.add(panel);
   ss.setSize(300,300);
ss.setVisible(true);
ss.setDefaultCloseOperation(EXIT_ON_CLOSE);
  }
}