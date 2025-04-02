/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filelist;
import java.io.*;
/**
 *
 * @author Apollo
 */
public class FileList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int i;
File f=new File("d:/downloads");
String str[]=f.list();
for(i=0;i<str.length;i++)
{
System.out.println(str[i]);
}

    }
    
}
