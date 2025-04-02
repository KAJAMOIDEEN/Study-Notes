/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datedemo;
import java.util.*;
/**
 *
 * @author Apollo
 */
public class DateDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
            // Instantiate a Date object
    Date date = new Date();
    
    // display time and date using toString()
    System.out.println(date);

    	Date dob= new Date(87,06,21);
Date doj = new Date(86,06,21);

if(doj.after(dob))
System.out.println("Entry dates are correct ");
else
System.out.println("Pls. Enter Doj date after dob date ");

    }
    
}
