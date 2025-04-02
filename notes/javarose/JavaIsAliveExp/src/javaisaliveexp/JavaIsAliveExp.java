/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaisaliveexp;

/**
 *
 * It is used to determine whether a thread has finished.  The isAlive method returns true if it is still running otherwise it returns false.
 */
public class JavaIsAliveExp extends Thread 
{
    public void run()
    {
        try
        {
            Thread.sleep(300);
            System.out.println("is run() method isAlive" + Thread.currentThread().isAlive());
        }
        catch(Exception e)
        {
            
        }
    }

   
    public static void main(String[] args) {
        // TODO code application logic here
        JavaIsAliveExp t1= new JavaIsAliveExp();
        System.out.println("Before starting thread isAlive:" + t1.isAlive());
        t1.start();
        System.out.println("After starting thread isAlive:" + t1.isAlive());
    }
    
}
