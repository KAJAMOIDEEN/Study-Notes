/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iteratordemo;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;

/**
 *
 * @author Apollo
 */
public class IteratorDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
            // create an array list
    ArrayList al = new ArrayList();
    
    // add elements to the array list
    al.add("C");
    al.add("A");
    al.add("E");
    al.add("B");
    al.add("D");
    al.add("F");

    // use iterator to display contents of al
    System.out.print("Original contents of al: ");
    Iterator itr = al.iterator();
    while(itr.hasNext()) 
{
      Object element = itr.next();
      System.out.print(element + " ");
}
    System.out.println();

    // modify objects being iterated
    ListIterator litr = al.listIterator(); 
    while(litr.hasNext()) 
{
      Object element = litr.next();
      litr.set(element + "+");
}

    System.out.print("Modified contents of al: ");
    itr = al.iterator(); 
    while(itr.hasNext()) 
{
      Object element = itr.next();
      System.out.print(element + " ");
}
    System.out.println();

    // now, display the list backwards
    System.out.print("Modified list backwards: ");
    while(litr.hasPrevious())
 {
      Object element = litr.previous();
      System.out.print(element + " ");
 }
    System.out.println();
  }

    }
    

