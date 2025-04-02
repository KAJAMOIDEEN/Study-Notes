import javax.swing.*;

   public class jframe_optionpaneconfirm {

      static void show(String s, String title, int type) {
         int reply = 0;
         if(title==null) {
            reply=JOptionPane.showConfirmDialog(null, s);
         }
         else {
            reply = JOptionPane.showConfirmDialog(null, s, title, type);
         }
         switch(reply) {
            case JOptionPane.YES_OPTION: // same as OK_OPTION
               System.out.println("YES/OK selected"); break;
            case JOptionPane.NO_OPTION:
               System.out.println("NO selected"); break;
            case JOptionPane.CANCEL_OPTION:
               System.out.println("CANCEL selected"); break;
            case JOptionPane.CLOSED_OPTION:
               System.out.println("CLOSED selected"); break;
            default: break;
         }
      }

      public static void main(String[] args) {
         String s = "The question is: why did you do it?";

         String title = "Title";
         show(s, null,  JOptionPane.DEFAULT_OPTION);
         show(s, title, JOptionPane.DEFAULT_OPTION);
         show(s, title, JOptionPane.YES_NO_OPTION);
         show(s, title, JOptionPane.YES_NO_CANCEL_OPTION);
         show(s, title, JOptionPane.OK_CANCEL_OPTION);

         System.exit(0);
   }
}
