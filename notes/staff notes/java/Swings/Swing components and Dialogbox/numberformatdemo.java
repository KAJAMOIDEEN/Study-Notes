import javax.swing.*;
import javax.swing.JFormattedTextField;
import java.text.Format;
import java.text.NumberFormat;

class numberformatdemo extends JFrame
{
  public static void main(String ars[])
{
     numberformatdemo demo=new numberformatdemo();
    JPanel panel=new JPanel();

    NumberFormat numberformat;
JFormattedTextField txtnumber;
numberformat=NumberFormat.getNumberInstance();
txtnumber=new JFormattedTextField(numberformat);
panel.add(txtnumber);
demo.add(panel);
demo.setSize(300,300);
demo.setVisible(true);
demo.setDefaultCloseOperation(EXIT_ON_CLOSE);
}
}
