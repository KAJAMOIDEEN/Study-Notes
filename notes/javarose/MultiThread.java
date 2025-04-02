/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multithread;

class First extends Thread
{ 
public void run( )
{
try
{
System.out.println("Executing First thread");
Thread.sleep(1000);
System.out.println("End of  First thread");
}
catch(Exception e)
{
System.out.println("Error");
}
}
}
class Second extends Thread
{
public void run( )
{
try
{
System.out.println("Executing second thread");
Thread.sleep(5000);
System.out.println("End of second thread");
}
catch(Exception e)
{
System.out.println("Error");
}
}
}
 
class Third extends Thread
{
public void run( )
{
try
{
System.out.println("Executing third thread");
Thread.sleep(2000);
System.out.println("End of third thread");
}
catch(Exception e)
{
System.out.println("Error");
}
}
}

public class MultiThread {

   
    public static void main(String[] args) {
        // TODO code application logic here
        First t1=new First( );
        Second t2=new Second( );
        Third t3 =new Third( );
        t1.start( );
        t2.start( );
        t3.start( );

    }
    
}
