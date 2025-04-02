/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package optionpaneexample2;
import javax.swing.*; 

public class OptionPaneExample2 {

    JFrame f;  
OptionPaneExample2(){  
    f=new JFrame();   
    String name=JOptionPane.showInputDialog(f,"Enter Name");      
}  
    
    public static void main(String[] args) {
        // TODO code application logic here
         new OptionPaneExample2();
    }
    
}
