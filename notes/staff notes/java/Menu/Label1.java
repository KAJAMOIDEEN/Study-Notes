import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Label1 extends JApplet
{
	private Container Panel;
	private LayoutManager Layout;
	private JLabel Label1;
	private JLabel Label2;	
	private JLabel Label3;
	private JLabel Label4;
	private JLabel Label5;
	private JLabel Label6;
	private JLabel Label7;
public Label1()
{
	Layout=new GridLayout(7,1);
	Label1=new JLabel("A Simple label");
	Label2=new JLabel("A label with left Alignment",JLabel.LEFT);
	Label3=new JLabel("A label with left Alignment",JLabel.RIGHT);
	Label4=new JLabel("A label with left Alignment",JLabel.CENTER);
	Label5=new JLabel("A label with left Alignment",JLabel.LEADING);
	Label6=new JLabel("A label with left Alignment",JLabel.TRAILING);
	Label7=new JLabel();
	Panel=getContentPane();
	Panel.setLayout(Layout);
	Panel.add(Label1);
	Panel.add(Label2);
	Panel.add(Label3);
	Panel.add(Label4);
	Panel.add(Label5);
	Panel.add(Label6);
	Panel.setBackground(Color.green);
	Label7.setHorizontalAlignment(JLabel.CENTER);
	Label7.setForeground(Color.red);
	Label7.setText("Text added with set text");
	}
}
/*<applet code=Label1.class width=300 height=300>
</applet>*/
	

	

