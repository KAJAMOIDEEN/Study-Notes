
//program for jfilechooser

import java.io.File;

import javax.swing.JFileChooser;

public class FileChooser {
  public static void main(String[] argv) {
    //String filename = File.separator + "tmp";
    JFileChooser fc = new JFileChooser();
fc.showDialog(null,"execute");
   //Show open dialog
    fc.showOpenDialog(null);
//    File selFile = fc.getSelectedFile();
System.out.println(fc.getCurrentDirectory());
System.out.println(fc.getSelectedFile());
    // Show save dialog
    fc.showSaveDialog(null);
//    selFile = fc.getSelectedFile();

  }
}