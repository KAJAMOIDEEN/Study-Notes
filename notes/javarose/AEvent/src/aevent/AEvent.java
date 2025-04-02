/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aevent;
import java.awt.*;  
import java.awt.event.*; 
/**
 *
 * @author Apollo
 */
public class AEvent extends Frame implements ActionListener
{
  TextField tf;
AEvent(){  
  
//create components  
 tf=new TextField();  
tf.setBounds(60,50,170,20);  
Button b=new Button("click me");  
b.setBounds(100,120,80,30);  
  
//register listener  
b.addActionListener(this);//passing current instance  
  
//add components and set size, layout and visibility  
add(b);
add(tf);  
setSize(300,300);  
setLayout(null);  
setVisible(true);  
}  
public void actionPerformed(ActionEvent e){  
tf.setText("Welcome");  
}  
    
    public static void main(String[] args) {
        // TODO code application logic here
        new AEvent();  
    }
    
}
