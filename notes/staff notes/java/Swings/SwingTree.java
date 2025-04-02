import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import javax.swing.tree.*;

public class SwingTree extends JFrame {
 public static int WIDTH = 400;
 public static int HEIGHT = 400;
 public static String TITLE = "SwingTree";

 Container frameContainer;
 // Swing components
 JTextField textField = new JTextField();
 JScrollPane scrollPane = new JScrollPane();
 JTree tree;
 Renderer renderer = new Renderer();
 DefaultMutableTreeNode nba = 
  new DefaultMutableTreeNode("National Basketball Association");
 DefaultMutableTreeNode western = 
  new DefaultMutableTreeNode("Western Conference");
 DefaultMutableTreeNode pacific = 
  new DefaultMutableTreeNode("Pacific Division Teams");
 DefaultMutableTreeNode lalakers = 
  new DefaultMutableTreeNode("Los Angeles (Lakers)");
 DefaultMutableTreeNode seattle = 
  new DefaultMutableTreeNode("Seattle");
 DefaultMutableTreeNode phoenix = 
  new DefaultMutableTreeNode("Phoenix");
 DefaultMutableTreeNode portland = 
  new DefaultMutableTreeNode("Portland");
 DefaultMutableTreeNode sacramento = 
  new DefaultMutableTreeNode("Sacramento");
 DefaultMutableTreeNode goldengate = 
  new DefaultMutableTreeNode("San Francisco");
 DefaultMutableTreeNode laclippers = 
  new DefaultMutableTreeNode("Los Angeles (Clippers)");
 DefaultMutableTreeNode midwest = 
  new DefaultMutableTreeNode("Midwest Division Teams");
 DefaultMutableTreeNode utah = 
  new DefaultMutableTreeNode("Utah");
 DefaultMutableTreeNode sanantonio = 
  new DefaultMutableTreeNode("San Antonio");
 DefaultMutableTreeNode houston = 
  new DefaultMutableTreeNode("Houston");
 DefaultMutableTreeNode minnesota = 
  new DefaultMutableTreeNode("Minnesota");
 DefaultMutableTreeNode vancouver = 
  new DefaultMutableTreeNode("Vancouver");
 DefaultMutableTreeNode dallas = 
  new DefaultMutableTreeNode("Dallas");
 DefaultMutableTreeNode denver = 
  new DefaultMutableTreeNode("Denver");
 DefaultMutableTreeNode eastern = 
  new DefaultMutableTreeNode("Eastern Conference");
 DefaultMutableTreeNode atlantic = 
  new DefaultMutableTreeNode("Atlantic Division Teams");
 DefaultMutableTreeNode miami = 
  new DefaultMutableTreeNode("Miami");
 DefaultMutableTreeNode ny = 
  new DefaultMutableTreeNode("New York");
 DefaultMutableTreeNode nj = 
  new DefaultMutableTreeNode("New Jersey");
 DefaultMutableTreeNode washington = 
  new DefaultMutableTreeNode("Washington");
 DefaultMutableTreeNode orlando = 
  new DefaultMutableTreeNode("Orlando");
 DefaultMutableTreeNode boston = 
  new DefaultMutableTreeNode("Boston");
 DefaultMutableTreeNode philadelphia = 
  new DefaultMutableTreeNode("Philadelphia");
 DefaultMutableTreeNode central = 
  new DefaultMutableTreeNode("Central Division Teams");
 DefaultMutableTreeNode chicago = 
  new DefaultMutableTreeNode("Chicago");
 DefaultMutableTreeNode indiana = 
  new DefaultMutableTreeNode("Indiana");
 DefaultMutableTreeNode charlotte = 
  new DefaultMutableTreeNode("Charlotte");
 DefaultMutableTreeNode atlanta = 
  new DefaultMutableTreeNode("Atlanta");
 DefaultMutableTreeNode cleveland = 
  new DefaultMutableTreeNode("Cleveland");
 DefaultMutableTreeNode detroit = 
  new DefaultMutableTreeNode("Detroit");
 DefaultMutableTreeNode milwaukee = 
  new DefaultMutableTreeNode("Milwaukee");
 DefaultMutableTreeNode toronto = 
  new DefaultMutableTreeNode("Toronto");
 JMenuBar menuBar = new JMenuBar();
 JMenu fileMenu = new JMenu("File");
 JMenuItem fileExit = new JMenuItem("Exit");
 
 public SwingTree() {
  super(TITLE);
  buildGUI();
  setupEventHandlers();
  setSize(WIDTH,HEIGHT);
  show();
 }
 
 void buildGUI() {
  setupMenuBar();
  setupTree();
  layoutComponents();
 }

 void setupMenuBar() {
  fileMenu.add(fileExit); 
  menuBar.add(fileMenu);
  setJMenuBar(menuBar);
 }

 void setupTree() {
  nba.add(western);
  nba.add(eastern);
  western.add(pacific);
  western.add(midwest);
  eastern.add(atlantic);
  eastern.add(central);
  pacific.add(lalakers);
  pacific.add(laclippers);
  pacific.add(goldengate);
  pacific.add(seattle);
  pacific.add(phoenix);
  pacific.add(portland);
  pacific.add(sacramento);
  midwest.add(utah);
  midwest.add(sanantonio);
  midwest.add(houston);
  midwest.add(minnesota);
  midwest.add(vancouver);
  midwest.add(dallas);
  midwest.add(denver);
  atlantic.add(miami);
  atlantic.add(ny);
  atlantic.add(nj);
  atlantic.add(washington);
  atlantic.add(orlando);
  atlantic.add(boston);
  atlantic.add(philadelphia);
  central.add(chicago);
  central.add(indiana);
  central.add(charlotte);
  central.add(atlanta);
  central.add(cleveland);
  central.add(detroit);
  central.add(milwaukee);
  central.add(toronto);  
  tree = new JTree(nba);
 }

 public void layoutComponents() {
  frameContainer = getContentPane();
  frameContainer.setLayout(new BorderLayout());
  tree.setCellRenderer(renderer);
  tree.addTreeSelectionListener(new TreeHandler());
  scrollPane.getViewport().add(tree);
  frameContainer.add("Center",scrollPane);
  frameContainer.add("South",textField);
 }

 void setupEventHandlers() {
  addWindowListener(new WindowHandler());
  fileExit.addActionListener(new MenuItemHandler());
 }

 public static void main(String[] args) {
   SwingTree app = new SwingTree();
 }

 public class WindowHandler extends WindowAdapter {
  public void windowClosing(WindowEvent e) {
   System.exit(0);
  }
 }

 public class MenuItemHandler implements ActionListener {
  public void actionPerformed(ActionEvent e) {
   String cmd = e.getActionCommand();
   if(cmd.equals("Exit")) System.exit(0);
  }
 }

 public class TreeHandler implements TreeSelectionListener {
  public void valueChanged(TreeSelectionEvent e) {
   TreePath path = e.getPath();
   String text = path.getPathComponent(
    path.getPathCount()-1).toString();
   if(path.getPathCount()>3) {
    text += ": ";
    text += Integer.toString((int)(Math.random()*50))+" Wins ";
    text += Integer.toString((int)(Math.random()*50))+" Losses";
   }
   textField.setText(text);
  }
 }
 
 class Renderer extends JLabel implements TreeCellRenderer { 
  public Component  getTreeCellRendererComponent(JTree tree,
    Object value, boolean selected, boolean expanded,
    boolean leaf, int row, boolean hasFocus) {
    setText(value.toString()+"                   ");
    return this;
  }
 }
}