/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package buttonexample;
import javax.swing.*; 
/**
 *
 * @author Apollo
 */
public class ButtonExample {
ButtonExample(){    
JFrame f=new JFrame("Button Example");            
JButton b=new JButton(new ImageIcon("D:\\icon.png"));    
b.setBounds(100,100,100, 40);    
f.add(b);    
f.setSize(300,400);    
f.setLayout(null);    
f.setVisible(true);    
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
}
    public static void main(String[] args) {
        // TODO code application logic here
        new ButtonExample();
    }
    
}
