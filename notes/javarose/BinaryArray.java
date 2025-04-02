/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binaryarray;

import java.util.Arrays;

/**
 *
 * @author Apollo
 */

/*1.sort( ):

This method sorts an array. So that it is arranged in ascending order.*/

public class BinaryArray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
      int a[]={90,25,10,30,15,60,95,100};
        int i;
        Arrays.sort(a);
        for(i=0;i<a.length;i++)
        {
        System.out.println(a[i]+ ",    ");
        }


    }
    
}
