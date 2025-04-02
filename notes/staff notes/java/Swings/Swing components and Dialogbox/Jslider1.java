import javax.swing.JSlider;
import javax.swing.*;
import java.awt.BorderLayout;
import javax.swing.event.ChangeListener;
import javax.swing.event.*;
public class Jslider1 extends JFrame
{
  public static void main(String[] argv) throws Exception 
{
      Jslider1 ss=new Jslider1();
    JPanel panel=new JPanel();  
    JSlider slider = new JSlider(JSlider.HORIZONTAL,0,255,0);
   int value=slider.getValue();
System.out.println(value);
slider.setValue(25);
   int value1=slider.getValue();
System.out.println(value1);

slider.setMinorTickSpacing(5);
    slider.setMajorTickSpacing(10);
  slider.setPaintTicks(true);
  slider.setSnapToTicks(true);

 //   ss.add(slider, BorderLayout.NORTH);
panel.add(slider);
ss.add(panel);


   ss.setSize(300,300);
ss.setVisible(true);
ss.setDefaultCloseOperation(EXIT_ON_CLOSE);

	slider.addChangeListener(new ChangeListener()
	{
	public void stateChanged(ChangeEvent e)
	{
	System.out.println("item is changed");
	}
	});
  }
}