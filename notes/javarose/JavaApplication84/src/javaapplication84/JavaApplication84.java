/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication84;
import java.util.*;
/**
 *
 * @author Apollo
 */
public class JavaApplication84 
{
    int a,b,c;
   
    public void sample(int x,int y)
    {
        a=x;
        b=y;
    }
    public void add()
    {
        c=a+b;
        System.out.println(c);
    }


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        int a,b;
        JavaApplication84 z=new JavaApplication84();
        Scanner sc = new Scanner(System.in);
        System.out.println(" Enter the A Value");
        a=sc.nextInt();
        System.out.println(" Enter the A Value");
        b=sc.nextInt();
        z.sample(a,b);
        z.add();
        
        // TODO code application logic here
    }
    
}
