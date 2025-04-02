import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import javax.swing.tree.*;

public class treeexample extends JFrame
{
public static void main(String ss[])
{
treeexample t1=new treeexample("TreeDemo");
t1.setSize(500,500);
t1.setVisible(true);
}

public treeexample(String s) 
{
setTitle(s);

//create root
DefaultMutableTreeNode root=new DefaultMutableTreeNode("Science");

//create child node

DefaultMutableTreeNode other=new DefaultMutableTreeNode("Physics");
root.add(other);
 
//create further child nodes
DefaultMutableTreeNode other1=new DefaultMutableTreeNode("Atomic");
other.add(other1);
other1=new DefaultMutableTreeNode("Nuclear");
other.add(other1);
other1=new DefaultMutableTreeNode("Thermo");
other.add(other1);

//create another child node
other=new DefaultMutableTreeNode("Chemistry");
root.add(other);
other1=new DefaultMutableTreeNode("Organic");
other.add(other1);
other1=new DefaultMutableTreeNode("Inorganic");
other.add(other1);

other=new DefaultMutableTreeNode("Biology");
root.add(other);
other1=new DefaultMutableTreeNode("Botany");
other.add(other1);
other1=new DefaultMutableTreeNode("Zoology");
other.add(other1);
other1=new DefaultMutableTreeNode("Genetics");
other.add(other1); 

JTree jt=new JTree(root);
Container c=getContentPane();
c.add(new JScrollPane(jt)) ;
}
}