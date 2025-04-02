import java.awt.*;
import javax.swing.*;
import javax.swing.tree.*;

public class Trees extends JFrame
{
	JTree jt;
	public Trees()
	{
	Container c=getContentPane();
	DefaultMutableTreeNode root=new DefaultMutableTreeNode("Tourism");
	DefaultMutableTreeNode branch=new DefaultMutableTreeNode("Places");
	DefaultMutableTreeNode leaves=new DefaultMutableTreeNode("Chennai");
	branch.add(leaves);
	root.add(branch);
	jt=new JTree(root);
	c.add(jt);
	}

	public static void main(String sa[])
	{
	Trees tr=new Trees();
	tr.setVisible(true);
	}
}	
			