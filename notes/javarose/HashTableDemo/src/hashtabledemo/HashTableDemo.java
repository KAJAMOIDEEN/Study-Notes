/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hashtabledemo;
import java.util.*;
/**
 *
 * @author Apollo
 * 
 * 
It is used to create hash table.  The hash table contains two columns.  The 1st column is the index and the 2nd is value.

1.	put( ): 	It is used insert the values into the hash table.

2.	get( ): 	It returns the value corresponds to the given index value.

 */
public class HashTableDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Hashtable h=new Hashtable( );
        h.put("100","kumar");
        h.put("101","Rangan");
        h.put("102","Ram");
        h.put("103","Sri");
        System.out.println(h.get("102"));
        System.out.println(h);

    }
    
}
