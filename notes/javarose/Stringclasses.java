/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stringclasses;

/**
 *
 * @author Apollo
 */
public class Stringclasses {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String str=new String("Palar computer");
//or
String str1="palar computer";
System.out.println(str);
System.out.println(str1);
System.out.println("Length = "+str.length( ));
System.out.println ("Index Of o ="+str.indexOf('o'));
System.out.println("Index of put = "+str.indexOf("put"));
System.out.println("char at pos. 3 ="+str.charAt(3));
System.out.println("Str = str1 ="+str.equals(str1));
System.out.println("ignore Str = str1 ="+str.equalsIgnoreCase(str1));
System.out.println("Strat at palar ="+str.startsWith("palar"));
System.out.println("sub string of 7 = "+str.substring(7));
System.out.println("sub string of 7 to  10 = "+str.substring(7,10));
System.out.println("Lower Case = "+str.toLowerCase());
System.out.println("Upper case = "+str.toUpperCase());
System.out.println("Replace a to e = "+str.replace('a','e'));
System.out.println(str);

    }
    
}
