/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package appletlifedemo;
import java.awt.*;
import java.applet.*;

/**
 *
 * @author Apollo
 */
public class AppletLifeDemo extends Applet
{
public void init( )
{
System.out.println("Executing init method");
}
public void start( )
{
System.out.println("Executing start method");
}
public void paint(Graphics g)
{
g.drawString("welcome to java",100,100);
}
public void stop( )
{
System.out.println("Executing stop method");
}
public void destroy( )
{
System.out.println("Executing destroy method");
}

    
    public static void main(String[] args) {
        // TODO code application logic here
        AppletLifeDemo app = new AppletLifeDemo();
    }
    
}
