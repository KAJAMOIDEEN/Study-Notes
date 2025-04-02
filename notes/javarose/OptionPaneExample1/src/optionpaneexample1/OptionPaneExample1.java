/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package optionpaneexample1;
import javax.swing.*;  

public class OptionPaneExample1 {

    JFrame f;  
OptionPaneExample1(){  
    f=new JFrame();  
    JOptionPane.showMessageDialog(f,"Successfully Updated.","Alert",JOptionPane.WARNING_MESSAGE);     
}  
    public static void main(String[] args) {
        // TODO code application logic here
        new OptionPaneExample1();  
    }
    
}
