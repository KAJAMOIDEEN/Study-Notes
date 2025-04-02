/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaselectdemo;
import java.sql.*;
/**
 *
 * @author Apollo
 */
public class JavaSelectDemo {

    
    public static void main(String[] args) {
        // TODO code application logic here"
        try
        {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/sai?","root","root");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from employee");
            while(rs.next())
                System.out.println(rs.getInt(1)+ " " + rs.getString(2));
            con.close();
            
        }
        catch(Exception e)
        {
        System.out.println(e);
        }
    }
    
}
