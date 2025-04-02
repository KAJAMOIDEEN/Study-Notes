/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraysort;

import java.util.Arrays;

/**
 *
 * @author Apollo
 * 
 * BinarySearch( ):-

This method used a binary search to find a specified value.  This method must be applied to sorted arrays.

Syntax:

Arrays.binarySearch(array,value);

 */
public class ArraySort {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a[]={90,100,75,60,10,95,25,80};
        int i ;
        Arrays.sort(a);
        System.out.println(Arrays.binarySearch(a,75));

    }
    
}
