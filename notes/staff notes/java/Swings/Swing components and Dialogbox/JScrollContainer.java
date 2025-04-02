import javax.swing.*;

public class JScrollContainer{
  public static void main(String[] args) {
    String st = "Math_calculs_coordinate\n" + "Computer_Operator_Programer\n" 
+ "Physics_Laboratry\n"
 + "Chemestru\n" + "Biology" + "Civics\n" +"History" + "Hindi\n" + "English\n" 
+ "Tally" + "Coordinate\n"
 + "Trigonometry" + "ram is a good boy\n" + "He has four cars and two computers.";
    JFrame frame = new JFrame("Creating a JScrollPane Container");
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    JPanel panel = new JPanel();
    JTextArea area = new JTextArea(st,5,6);
    JScrollPane spane = new JScrollPane(area);
    panel.add(spane);
    frame.add(panel);
    frame.setSize(400,400);
    frame.setVisible(true);
  }
}