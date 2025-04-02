/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labelexample2;
import java.awt.*;    
import java.awt.event.*;  
/**
 *
 * @author Apollo
 */
public class LabelExample2 extends Frame implements ActionListener
{

        // creating objects of TextField, Label and Button class  
    TextField tf;   
    Label l;   
    Button b;   
  
    // constructor to instantiate the above objects  
    LabelExample2() {    
        tf = new TextField();    
        tf.setBounds(50, 50, 150, 20);   
  
        l = new Label();    
        l.setBounds(50, 100, 250, 20);    
  
        b = new Button("Find IP");    
        b.setBounds(50,150,60,30);    
        b.addActionListener(this);   
  
        add(b);  
        add(tf);  
        add(l);   
  
        setSize(400,400);    
        setLayout(null);    
        setVisible(true);    
    }    
  
    // defining actionPerformed method to generate an event  
    public void actionPerformed(ActionEvent e) {    
        try {    
        String host = tf.getText();    
        String ip = java.net.InetAddress.getByName(host).getHostAddress();    
        l.setText("IP of "+host+" is: "+ip);    
        }   
        catch (Exception ex) {  
            System.out.println(ex);  
        }    
    }    
    public static void main(String[] args) {
        // TODO code application logic here
         new LabelExample2();     
    }
    
}
