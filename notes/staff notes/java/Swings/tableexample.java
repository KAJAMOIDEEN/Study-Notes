	import javax.swing.*;
	import java.awt.*;
	
	class tableexample 
	{
	public static void main(String aa[])
	{
	Studenttable st=new Studenttable();
	
	st.setSize(500,500);
	st.setVisible(true);
	}
	}
	
	class Studenttable extends JFrame
	{
	public Studenttable()
	{
	Container c=getContentPane();
	c.setBackground(Color.green);
	Object [][]cells=	{

	{"ACJTP",new Integer(01),new Integer(400000),"P.Pushparaj","Arakonam"},
	{"ACEP",new Integer(02),new Integer(5000000),"K.Ravi","vellore"},
	{"eACCP",new Integer(03),new Integer(60000),"M.MaryPriya","Arakonam"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},
	{"Html",new Integer(04),new Integer(6030),"K.Suthapriya","Arakkonam"},
	{"Ms-Office",new Integer(05),new Integer(600),"M.Kesavan","vellore"},

		};
	String[]colnames={"Course name","Course Code","Course Fees","StudentName","NativePlace"};
	JTable t=new JTable(cells,colnames);
	c.add(new JScrollPane(t),"Center");
	}
	}