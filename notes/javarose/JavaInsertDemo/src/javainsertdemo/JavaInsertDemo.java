/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javainsertdemo;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;

import java.sql.Connection;
import java.sql.Statement;
/**
 *
 * @author Apollo
 */
public class JavaInsertDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Connection conn = null;
        Statement stmt = null;
        try
        {
            try
            {
                Class.forName("com.mysql.jdbc.Driver");
                
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
            conn = (Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/sai?","root","root");
            System.out.println("connection is created Successfully");
            stmt = (Statement)conn.createStatement();
            String query1 = "Insert into employee " + "Values(102,'John')";
            stmt.executeUpdate(query1);
            System.out.println("Record Inserted Successfully");
        }
        catch(SQLException excep)
        {
            excep.printStackTrace();
            
            
        }
        catch(Exception excep)
        {
            excep.printStackTrace();
            
            
        }
        finally
        {
            try
            {
                if(stmt != null)
                    conn.close();
            } catch (SQLException e){}
            try
            {
                if(conn != null)
                    conn.close();
            }catch(SQLException e)
            {
                e.printStackTrace();
            }
        }
        System.out.println("Please check");
    }
    
}
