

import javax.swing.*;

   public class jframe_optionpane {

      public static void main(String[] args) {

         String s = "This is the message";

         String t = "This is the title";

         JOptionPane.showMessageDialog(null, s);
         JOptionPane.showMessageDialog(null, s, t, JOptionPane.PLAIN_MESSAGE);
         JOptionPane.showMessageDialog(null, s, t, JOptionPane.QUESTION_MESSAGE);
         JOptionPane.showMessageDialog(null, s, t, JOptionPane.WARNING_MESSAGE);
         JOptionPane.showMessageDialog(null, s, t, JOptionPane.INFORMATION_MESSAGE);
         JOptionPane.showMessageDialog(null, s, t, JOptionPane.ERROR_MESSAGE);

         System.exit(0);
   }
}
