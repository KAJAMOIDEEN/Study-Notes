import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.BorderLayout;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Combobox  {
JFrame frame = new JFrame("Editable JComboBox");
JPanel panel=new JPanel();    
  JComboBox combo = new JComboBox();

  public Combobox() {
    
    combo.addItem("A");
    combo.addItem("H");
    combo.addItem("P");
combo.addItem("t");
combo.insertItemAt("y",1);
//combo.removeItemAt(0);
//combo.removeItemAt(combo.getItemCount()-1);
//combo.removeAllItems();

    combo.setEditable(true);
panel.add(combo);
    System.out.println("#items=" + combo.getItemCount());
//combo.setSelectedIndex(3);
combo.setSelectedItem("t");

    combo.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        System.out.println("Selected index=" + combo.getSelectedIndex()
            + " Selected item=" + combo.getSelectedItem());

      }
    });


   frame.getContentPane().add(combo);
    //pack();
    frame.setVisible(true);
frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
frame.add(combo, BorderLayout.NORTH);
  }

  public static void main(String arg[]) {
    new Combobox();
  }
}