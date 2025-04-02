import javax.swing.*;

public class jframe_optionpane_input
 {

   static String show(String message, Object initValue) {
      String reply = null;

      if(initValue==null) reply=JOptionPane.showInputDialog(message);
      else reply=JOptionPane.showInputDialog(message, initValue);

      return reply;
   }


   public static void main(String[] args) {
      String s="";

      s = show("Enter your last name", null);
      System.out.println("name = " + s);

      s = show("Is it after mid-day where you are?", "yes");
      System.out.println("after mid-day? " + s);
   }

}
