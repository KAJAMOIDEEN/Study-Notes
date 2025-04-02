/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package optionpaneexample;
import javax.swing.*; 

public class OptionPaneExample {

    JFrame f;  
OptionPaneExample(){  
    f=new JFrame();  
    JOptionPane.showMessageDialog(f,"Hello, Welcome to Javatpoint.");  
}  
       public static void main(String[] args) {
        // TODO code application logic here
        new OptionPaneExample(); 
    }
    
}
