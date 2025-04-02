import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
public class Color1
{
public static void main(String ar[])
{
JFrame frm=new JFrame("JColorChooser");
JColorChooser col;
//Color clrcolor;
col=new JColorChooser();
//col.setColor(Color.red);

frm.setSize(200,100);
frm.setVisible(true);
JPanel jp=new JPanel();
jp.add(col);
frm.add(jp);
frm.setDefaultCloseOperation(frm.EXIT_ON_CLOSE);
}
}
