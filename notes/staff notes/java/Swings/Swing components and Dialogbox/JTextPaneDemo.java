import javax.swing.JButton;
import javax.swing.JTextPane;
import javax.swing.text.Style;
import javax.swing.text.StyleConstants;
import javax.swing.text.StyledDocument;

public class JTextPaneDemo extends JFrame
{
  public static void main(String[] argv) throws Exception 
{
    JTextPane textPane = new JTextPane();
    StyledDocument doc = (StyledDocument) textPane.getDocument();

    Style style = doc.addStyle("StyleName", null);
    StyleConstants.setComponent(style, new JButton("OK"));

    doc.insertString(doc.getLength(), "ignored text", style);

  }
}