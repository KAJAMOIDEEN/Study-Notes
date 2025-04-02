import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JToolBar;

public class SwingBar extends JFrame {
  Container frameContainer;

  JToolBar toolBar = new JToolBar();

  String[] iconFiles = { "New.gif", "open.gif", "save.gif", "cut.gif", "copy.gif", "paste.gif" ,"close.gif"};

  String[] buttonLabels = { "New", "Open", "Save", "Cut", "Copy", "Paste","Close" };

  ImageIcon[] icons = new ImageIcon[iconFiles.length];

  JButton[] buttons = new JButton[buttonLabels.length];

  JMenuBar menuBar = new JMenuBar();

  JMenu fileMenu = new JMenu("File");

  JMenuItem fileExit = new JMenuItem("Exit");

  public SwingBar() {
    fileMenu.add(fileExit);
    menuBar.add(fileMenu);
    setJMenuBar(menuBar);

    frameContainer = getContentPane();
    frameContainer.setLayout(new BorderLayout());
    for (int i = 0; i < buttonLabels.length; ++i) {
      icons[i] = new ImageIcon(iconFiles[i]);
      buttons[i] = new JButton(icons[i]);
      buttons[i].setToolTipText(buttonLabels[i]);
      if (i == 2)
        toolBar.addSeparator();
      toolBar.add(buttons[i]);
    }
    frameContainer.add("North", toolBar);

    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    fileExit.addActionListener(new MenuItemHandler());

    setSize(500, 500);
    setVisible(true);
  }

  public static void main(String[] args) {
    SwingBar app = new SwingBar();
  }

  public class MenuItemHandler implements ActionListener {
    public void actionPerformed(ActionEvent e) {
      String cmd = e.getActionCommand();
      if (cmd.equals("Exit"))
        System.exit(0);
    }
  }
}