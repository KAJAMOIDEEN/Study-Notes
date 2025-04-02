/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filedemo;

import java.io.File;

/**
 *
 * @author Apollo
 */
public class FileDemo {

   static void P(String s)
    {
    System.out.println(s);
    }
    public static void main(String[] args) {
        // TODO code application logic here
        File f1= new File("/subhjava/FileList.java");
        P("File name : " + f1.getName());
        P("Path : "+f1.getPath());
        P("Abs Path : "+f1.getAbsolutePath());
        P("Parent  : "+f1.getParent());
        P(f1.exists() ? "Exists " : "does not Exist ");
        P(f1.canWrite () ? "is writeable " : "is not writeable");
        P(f1.canRead () ? "is readable " :" is not readable");
        P("is " + (f1.isDirectory() ? "directory ": "Not  a directory "));
        P("is " + (f1.isHidden() ? "Hidden ": "Not  Hidden"));
        P(f1.isFile() ? "Normal file " : "might be a named pipe");
        P(f1.isAbsolute () ? "is obsolute " : " is not absolute ");
        P("File last modified : "+f1.lastModified());
        P("file size : "+f1.length() + "Bytes");
    }
    
}
