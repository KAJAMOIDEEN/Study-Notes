/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package runnabledemo;

class palar implements Runnable
{
public void run( )
{
try
{
System.out.println("Welcome to java");
Thread.sleep(3000);
System.out.println("Welcome to palar");
}
catch(Exception e)
{
System.out.println("Error");
}
}
}

public class RunnableDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Thread t1 = new Palar( );
t1.start();

    }
    
}
