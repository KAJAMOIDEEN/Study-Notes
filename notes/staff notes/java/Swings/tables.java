// Program for Tables in Swing 
import java.awt.*;
import javax.swing.*;
public class tables extends JFrame
{
	JTable jta;
	public tables()
	{
	Object[][] 	cells={{"Rajesh","Lab-In-Charge","Arakkonam","15000"},{"Guna","Faculty"," "," 10000"},{"Priya","Faculty","","11000"},{"Gopi","Academics Head"," ","19000"},{"Raji","Teacher","Chennai","8700"}};
	String[] colname={"Names","Desgination","Place","Salary"};
	jta=new JTable(cells,colname);
	Container c=getContentPane();
	c.add(new JScrollPane(jta),"Center");
	}

	public static void main(String sa[])
	{
	tables ta=new tables();
	ta.setVisible(true);
	ta.setSize(300,300);
	}
}
				