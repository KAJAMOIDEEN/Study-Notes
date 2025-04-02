/* Exercise 3  of Session 3*/
/////////////////////////////////////////
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.sql.*;
public class  SwingGUI extends JFrame implements ActionListener
{
JTextField  name,passwd;
JLabel name_lbl,pass_lbl;
JButton ok;
ResultSet rs;
String s1,sql,url;
Statement s;
Connection con;
JLabel message=new JLabel(" ");
public SwingGUI( )
	{
   getContentPane().setLayout(new GridLayout(3,2));
   name_lbl=new JLabel("Enter Name");
   pass_lbl=new JLabel("Enter Password");
  name=new JTextField (20);
  passwd=new JPasswordField (20);
  ok=new JButton("OK");
   getContentPane( ).add(name_lbl);
   getContentPane( ).add(name);
   getContentPane( ).add(pass_lbl);
   getContentPane( ).add(passwd);
   getContentPane( ).add(ok);
   ok.addActionListener(this);
   setSize(500,500);
   setVisible (true);
pack();
	}

	public void actionPerformed(ActionEvent a)
	{
if (a.getSource( )==ok)
		{

	try{
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
	 url="jdbc:odbc:login";
	con=DriverManager.getConnection(url);
	 s=con.createStatement();
sql="Select * from login where name='"+name.getText()+"' and password='"+passwd.getText()+"'";
System.out.println(sql);
rs=s.executeQuery(sql);
rs.next();
if(rs==null)
message.setText("Access denied!");
else
message.setText("Access granted!");
getContentPane().removeAll();
getContentPane().add(message);
validate();
repaint();
	}
 catch(Exception ce){System.out.println(ce);}
	}
	}
	public static void main(String args[])
	{
new SwingGUI();
}
}