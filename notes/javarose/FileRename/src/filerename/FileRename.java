/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filerename;
import java.io.*;
/**
 *
 * @author Apollo
 */
public class FileRename {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        File f1=new File("c:/palar/kumar");
File f2=new File("c:/palar/prakash");
f1.renameTo(f2);

    }
    
}
