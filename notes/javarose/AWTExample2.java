/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package awtexample2;
import java.awt.*;  
/**
 *
 * @author Apollo
 */
public class AWTExample2 {

     // initializing using constructor  
   AWTExample2() {  
  
      // creating a Frame  
      Frame f = new Frame();  
  
      // creating a Label  
      Label l = new Label("Employee id:");   
  
      // creating a Button  
      Button b = new Button("Submit");  
  
      // creating a TextField  
      TextField t = new TextField();  
  
      // setting position of above components in the frame  
      l.setBounds(20, 80, 80, 30);  
      t.setBounds(20, 100, 80, 30);  
      b.setBounds(100, 100, 80, 30);  
  
      // adding components into frame    
      f.add(b);  
      f.add(l);  
      f.add(t);  
  
      // frame size 300 width and 300 height    
      f.setSize(400,300);  
  
      // setting the title of frame  
      f.setTitle("Employee info");   
          
      // no layout  
      f.setLayout(null);   
  
      // setting visibility of frame  
      f.setVisible(true);  
}    
    public static void main(String[] args) {
        // TODO code application logic here
        // creating instance of Frame class   
        AWTExample2 awt_obj = new AWTExample2();    
    }
    
}
