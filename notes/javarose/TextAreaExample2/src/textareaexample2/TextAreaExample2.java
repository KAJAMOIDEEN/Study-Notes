/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package textareaexample2;
import java.awt.*;    
import java.awt.event.*; 
/**
 *
 * @author Apollo
 */
public class TextAreaExample2 extends Frame implements ActionListener 
{
    // creating objects of Label, TextArea and Button class.  
Label l1, l2;    
TextArea area;    
Button b;    
// constructor to instantiate  
TextAreaExample2() {    
// instantiating and setting the location of components on the frame  
    l1 = new Label();    
    l1.setBounds(50, 50, 100, 30);    
    l2 = new Label();    
    l2.setBounds(160, 50, 100, 30);    
    area = new TextArea();    
    area.setBounds(20, 100, 300, 300);    
    b = new Button("Count Words");    
    b.setBounds(100, 400, 100, 30);    
  
// adding ActionListener to button  
    b.addActionListener(this);    
  
// adding components to frame  
    add(l1);  
add(l2);  
add(area);  
add(b);    
// setting the size, layout and visibility of frame  
    setSize(400, 450);    
    setLayout(null);    
    setVisible(true);    
}    
// generating event text area to count number of words and characters  
public void actionPerformed(ActionEvent e) {    
    String text = area.getText();    
    String words[]=text.split("\\s");    
    l1.setText("Words: "+words.length);    
    l2.setText("Characters: "+text.length());    
}    

    
    public static void main(String[] args) {
        // TODO code application logic here
          new TextAreaExample2();  
    }
    
}
