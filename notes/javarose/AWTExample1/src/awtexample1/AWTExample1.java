/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package awtexample1;
import java.awt.*;
/**
 *
 * @author Apollo
 */
public class AWTExample1 extends Frame
{
    AWTExample1()
    {
        //creating a Button
        Button b = new Button("Click Me");
        
        //setting button position on screen
        b.setBounds(30,100,80,30);
        
        //adding button into frame
        add(b);
        
        //framesize 300 width and 300 height
        setSize(300,300);
        
        //setting the title of frame
        setTitle("This is out basic AWT Example");
        
        //no layout manager
        setLayout(null);
        
        //now frame will be visible,by default it is not visible
        setVisible(true);
                
    }

    
    public static void main(String[] args) {
        // TODO code application logic here
        
        //creating instance of Frame class
        AWTExample1 f = new AWTExample1();
    }
    
}
