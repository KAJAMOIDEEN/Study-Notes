/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package windowexample;
import java.awt.*;    
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;    
import java.awt.event.WindowListener; 

// class which inherits the Frame class  
public class WindowExample extends Frame {

    // class constructor  
    WindowExample() {    
// adding WindowListener to the Frame  
// and using the windowClosing() method of WindowAdapter class  
        addWindowListener (new WindowAdapter() {    
            public void windowClosing (WindowEvent e) {    
                dispose();    
            }    
        });    
// setting the size, layout and visibility of frame  
        setSize (400, 400);    
        setLayout (null);    
        setVisible (true);    
    }    
    public static void main(String[] args) {
        // TODO code application logic here
        new WindowExample();  
    }
    
}
