/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package threaddemo;

class Mythread extends Thread
{
public void run( )
{
	try
{
System.out.println("welcome to palar");
Thread.sleep(2000); 
System.out.println("Welcome to Java");
}
catch(Exception e)
{
System.out.println("Error");
}
}
}

public class ThreadDemo {

   
    public static void main(String[] args) {
        // TODO code application logic here
        // create obj for thread
    Mythread t1= new Mythread(); 
    t1. start( );

    }
    
}
