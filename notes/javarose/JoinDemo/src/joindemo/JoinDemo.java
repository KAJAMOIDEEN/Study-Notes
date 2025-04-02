/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package joindemo;
import java.io.*;
/**
 *
 * Join( ) method:

The join method makes caller wait till the current thread finishes execution.  In this case it waits until the first thread finishes, before starting the second thread.

 */
public class JoinDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        First t1=new First( );
Second t2=new Second( );
Third t3 =new Third( );
try
{
t1.start( );
t1.join( );
t2.start( );
t2.join( );
t3.start( );
t3.join( );
}

catch(Exception e)
{
System.out.println(“Error”);
}
}

    }
    
}
