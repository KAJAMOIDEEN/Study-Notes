import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class CardLayoutdemo extends JPanel implements ActionListener 
{
  CardLayout card = new CardLayout(50, 50); // Create layout
  public CardLayoutdemo() 
{
    setLayout(card);
    JButton button;
    for (int i = 1; i <= 6; i++) 
{
      add(button = new JButton(" Press " + i), "Card" + i); // Add a button
      button.addActionListener(this); // Add listener for button
    }
  }
  // Handle button events
  public void actionPerformed(ActionEvent e) 
{
    card.next(this); // Switch to the next card
  }
  public static void main(String[] args) {
    JFrame aWindow = new JFrame();
    aWindow.setBounds(30, 30, 300, 300);
    aWindow.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    aWindow.getContentPane().add(new CardLayoutdemo());
    aWindow.setVisible(true);
  }
}