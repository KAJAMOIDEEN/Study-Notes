import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;

public class MenuBar1 extends JFrame 
{
  JMenuBar menubar = new JMenuBar();
ImageIcon icon = new ImageIcon("mr.jpg");

  JMenu file = new JMenu("File");
  JMenu edit = new JMenu("Edit");
  public MenuBar1() 
{
    file.setMnemonic(KeyEvent.VK_F);

    JMenuItem fileNew = new JMenuItem("New",icon);

    JMenuItem fileClose = new JMenuItem("Close");
    fileClose.setMnemonic(KeyEvent.VK_C);
    fileClose.setToolTipText("Exit application");
    fileClose.addActionListener(new ActionListener() 
{
      public void actionPerformed(ActionEvent event) 
{
        System.exit(0);
      }
    });

file.add(fileNew);
    file.add(fileClose);
    menubar.add(file);
menubar.add(edit);
    setJMenuBar(menubar);

    setSize(250, 200);
    setDefaultCloseOperation(EXIT_ON_CLOSE);
    setVisible(true);
  }

  public static void main(String[] args)
 {
  MenuBar1 ob= new MenuBar1();
  }
}
