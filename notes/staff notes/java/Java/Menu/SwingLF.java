import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.border.*;
import com.sun.java.swing.plaf.motif.*;
import javax.swing.plaf.metal.*;
import com.sun.java.swing.plaf.windows.*;

public class SwingLF extends JFrame 
{
 public static int WIDTH = 450;
 public static int HEIGHT = 450;
 public  static String TITLE = "SwingLF";
Container frameContainer;
// Swing components
 JPanel[] panels = new JPanel[6];
 JCheckBox checkbox1 = new JCheckBox("Check 1");
 JCheckBox checkbox2 = new JCheckBox("Check 2");
 JCheckBox checkbox3 = new JCheckBox("Check 3");
 ButtonGroup buttonGroup = new ButtonGroup();
 JRadioButton radioButton1 = new JRadioButton("Radio 1");
 JRadioButton radioButton2 = new JRadioButton("Radio 2");
 JRadioButton radioButton3 = new JRadioButton("Radio 3");
 JTextField textField1 = new JTextField("Text field 1",15);
 JTextField textField2 = new JTextField("Text field 2",15);
 JSlider slider1 = new JSlider(0,0,100,25);
 JSlider slider2 = new JSlider(0,0,100,75);
 JButton metalButton = new JButton("Metal");
 JButton motifButton = new JButton("Motif");
 JButton windowsButton = new JButton("Windows");
 JMenuBar menuBar = new JMenuBar();
 JMenu fileMenu = new JMenu("File");
 JMenuItem fileNew = new JMenuItem("New");
 JMenuItem fileOpen = new JMenuItem("Open");
 JMenuItem fileSave = new JMenuItem("Save");
 JMenuItem fileExit = new JMenuItem("Exit");
 JMenu editMenu = new JMenu("Edit");
 JMenuItem editCut = new JMenuItem("Cut");
 JMenuItem editCopy = new JMenuItem("Copy");
 JMenuItem editPaste = new JMenuItem("Paste"); 
 
 //Look and Feel Classes
 MetalLookAndFeel metalLF = new MetalLookAndFeel();
 MotifLookAndFeel motifLF = new MotifLookAndFeel();
 WindowsLookAndFeel windowsLF = new WindowsLookAndFeel();
 
 public SwingLF() 
{
  super(TITLE);
  buildGUI();
  setupEventHandlers();
  setSize(WIDTH,HEIGHT);
  show();
 }
 
void buildGUI() 
{
  setupMenuBar();
  layoutComponents();
 }

 void setupMenuBar() 
{
  fileMenu.add(fileNew); 
  fileMenu.add(fileOpen); 
  fileMenu.add(fileSave); 
  fileMenu.add(fileExit); 
  editMenu.add(editCut); 
  editMenu.add(editCopy); 
  editMenu.add(editPaste); 
  menuBar.add(fileMenu);
  menuBar.add(editMenu);
  setJMenuBar(menuBar);
 }

 public void layoutComponents() 
{
  for(int i=0;i<panels.length;++i)
   panels[i] = new JPanel();
  panels[0].setBorder(new TitledBorder("Checkboxes"));
  panels[0].setLayout(new GridLayout(3,1));
  panels[0].add(checkbox1);
  panels[0].add(checkbox2);
  panels[0].add(checkbox3);
  panels[1].setBorder(new TitledBorder("Radio Buttons"));
  panels[1].setLayout(new GridLayout(3,1));
  panels[1].add(radioButton1);
  panels[1].add(radioButton2);
  panels[1].add(radioButton3);
  panels[2].setBorder(new TitledBorder("Text Fields"));
  panels[2].add(textField1);
  panels[2].add(textField2);
  panels[3].setBorder(new TitledBorder("Sliders"));
  panels[3].add(slider1);
  panels[3].add(slider2);
  panels[4].setLayout(new GridLayout(3,1));
  panels[4].add(metalButton);
  panels[4].add(motifButton);
  panels[4].add(windowsButton);
  frameContainer = getContentPane();
  frameContainer.setLayout(new GridLayout(3,2));
  for(int i=0;i<panels.length;++i) frameContainer.add(panels[i]);
 }

 void setupEventHandlers() 
{
  addWindowListener(new WindowHandler());
  fileExit.addActionListener(new MenuItemHandler());
  metalButton.addActionListener(new ButtonHandler());
  motifButton.addActionListener(new ButtonHandler());
  windowsButton.addActionListener(new ButtonHandler());
 }

 public static void main(String[] args) 
{
   SwingLF app = new SwingLF();
 }

 public class WindowHandler extends WindowAdapter 
{
  public void windowClosing(WindowEvent e) 
  {
   System.exit(0);
  }
}

 public class MenuItemHandler implements ActionListener 
{
  public void actionPerformed(ActionEvent e) 
  {
      System.exit(0);
  }
}

public class ButtonHandler implements ActionListener 
{
   public void actionPerformed(ActionEvent e) 
   {
    String cmd = e.getActionCommand();
   if(cmd.equals("Motif")) 
   {
         try 
        {
          UIManager.setLookAndFeel(motifLF);
         SwingUtilities.updateComponentTreeUI(SwingLF.this);
      }
      catch(Exception ex)
     {
        System.out.println(ex);
      }
   }
    else if(cmd.equals("Metal")) 
    {
       try 
       {
            UIManager.setLookAndFeel(metalLF);
            SwingUtilities.updateComponentTreeUI(SwingLF.this);
        }
         catch(Exception ex)
         {
                System.out.println(ex);
          }
   }
   else if(cmd.equals("Windows")) 
   {
       try 
      {
            UIManager.setLookAndFeel(windowsLF);
            SwingUtilities.updateComponentTreeUI(SwingLF.this);
       }
       catch(Exception ex)
      {
           System.out.println(ex);
       }
   } 
  }
 }
 
}
