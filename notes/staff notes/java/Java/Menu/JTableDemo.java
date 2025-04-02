import java.awt.BorderLayout;
import javax.swing.table.*;
import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JPanel;
import javax.swing.JRootPane;
import java.awt.*;
public class JTableDemo {
  public static void main(String args[]) {
    JFrame frame = new JFrame();

JPanel panel=new JPanel();
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    Object rowData[][] = { { "aaa", "bbb", "ccc" , "aaa", "bbb", "ccc"},
        { "ddd", "eee", "fff", "aaa", "bbb", "ccc" } ,{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},
{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},
{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },
{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },
{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },
{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff" , "aaa", "bbb", "ccc"},{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },
{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" },
{ "ddd", "eee", "fff", "aaa", "bbb", "ccc" }};
    Object columnNames[] = { "One", "Two", "Three" ,"Three","Three","Three","Three"};
    JTable table = new JTable(rowData, columnNames);

    JScrollPane scrollPane = new JScrollPane(table);
    frame.add(scrollPane, BorderLayout.CENTER);
table.setAutoResizeMode(JTable.AUTO_RESIZE_OFF);
 frame.setUndecorated(true);
    frame.getRootPane().setWindowDecorationStyle(JRootPane.PLAIN_DIALOG);
  frame.getContentPane().add(scrollPane);
    frame.setSize(300, 150);
    frame.setVisible(true);
panel.add(scrollPane);
frame.add(panel);
  }
}