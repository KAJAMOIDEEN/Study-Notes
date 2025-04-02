/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javadeletedemo;
import java.sql.*;
/**
 *
 * @author Apollo
 */
public class JavaDeleteDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         try
        {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/sai?","root","root");
            Statement stmt = con.createStatement();
            stmt.executeUpdate("delete from employee where eid=102");
            System.out.println("Deleted Successfully");
            con.close();
            
        }
        catch(Exception e)
        {
        System.out.println(e);
        }
    }
    
}
