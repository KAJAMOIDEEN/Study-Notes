/* Exercise 3 of Session 2 */

// Program using the TreeDemo - Swing
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.tree.*;

public class TreeDemo extends JFrame 
{
   public static void main(String args[])
   {
    TreeDemo frame=new TreeDemo("Tree Demo");
    frame.setSize(300,200);
    frame.setVisible(true);
     }

public TreeDemo(String title)
	{
	setTitle(title);
     //create root
     DefaultMutableTreeNode root=new             
     DefaultMutableTreeNode("Subjects");

     //create child node
     DefaultMutableTreeNode style=new       
     DefaultMutableTreeNode("Physics");
     root.add(style);

     //create further child nodes
     DefaultMutableTreeNode artist=new     
     DefaultMutableTreeNode("Metaphysics");
     style.add(artist);
     artist=new DefaultMutableTreeNode("Astrophysics");
     style.add(artist);
     //create another child node
     style=new DefaultMutableTreeNode("Biology");
     root.add(style);
     artist=new DefaultMutableTreeNode("Microbiology");
     style.add(artist);
     artist=new DefaultMutableTreeNode("Biotechnology");
     style.add(artist);
     //create another child node
     style=new DefaultMutableTreeNode("Chemistry");
     root.add(style);
     artist=new DefaultMutableTreeNode("Organic");
     style.add(artist);
     artist=new DefaultMutableTreeNode("Inorganic");
     style.add(artist);

     JTree jt=new JTree(root);
     Container contentPane=getContentPane();
     contentPane.add(new JScrollPane(jt));
     }
}
