/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testjoinmethod;

/**
 *
 * The join method makes caller wait till the current thread finishes execution.  In this case it waits until the first thread finishes,
 * before starting the second thread.
 */
public class TestJoinMethod extends Thread
{
    public void run()
    {
        for(int i=1;i<=5;i++)
        {
            try
            {
               Thread.sleep(500);
               
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
            System.out.println(i);
        }
    }
    

   
    public static void main(String[] args) {
        // TODO code application logic here
        TestJoinMethod t1=new TestJoinMethod();
        TestJoinMethod t2=new TestJoinMethod();
        TestJoinMethod t3=new TestJoinMethod();
        t1.start();
        try
        {
            t1.join();
            
        }
        catch(Exception e)
        {
            System.out.println(e);
            
        }
        t2.start();
        t3.start();
    }
    
}
